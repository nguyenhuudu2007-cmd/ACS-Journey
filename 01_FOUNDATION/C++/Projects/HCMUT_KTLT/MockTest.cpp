#include <iostream>
#include <vector>
#include <string>
#include<cmath>
using namespace std;

//đổi thời gian
//hh-mm-ss-location
//quãng đường sẽ là ở chỉ số 9 về sau
int toSeconds(string timeStr ){
    int hh=stoi(timeStr.substr(0,2));
    int mm=stoi(timeStr.substr(3,2));
    int ss=stoi(timeStr.substr(6,2));
    return hh*3600+mm*60+ss;
}
int getTotalDistance(vector<string> logs, string start_time, string end_time) {
    // Viết code ở đây
    if(logs.empty()) return -1;

    int startSec=toSeconds(start_time);
    int endSec=toSeconds(end_time);

    bool foundStart=false, foundEnd=false;
    int total=0;

    for ( string log : logs ){
        int dashPos=log.find('-');
        string timePart=log.substr(0,dashPos);
        string disPart=log.substr(dashPos+1);

        int currentSec=toSeconds(timePart);
        int distance=stoi(disPart);

        if( timePart==start_time) foundStart= true;
        if ( timePart ==end_time ) foundEnd = true;

        if( currentSec>=startSec && currentSec <=endSec){
            total+=distance;
        }
    }
    if(!foundStart || !foundEnd ) return -1;
    return total;
}

//câu 2
int findShortestPath(char grid[][100], int rows, int cols) {
    int startX = -1, startY = -1;
    int endX = -1, endY = -1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'S') {
                startX = i;
                startY = j;
            }
            if (grid[i][j] == 'E') {
                endX = i;
                endY = j;
            }
        }
    }

    if (startX == -1 || endX == -1) return -1;

    int dist[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dist[i][j] = -1;
        }
    }

    int qx[10000], qy[10000];
    int front = 0, rear = 0;

    qx[rear] = startX;
    qy[rear] = startY;
    rear++;
    dist[startX][startY] = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while (front < rear) {
        int x = qx[front];
        int y = qy[front];
        front++;

        if (x == endX && y == endY) {
            return dist[x][y];
        }

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
                if (grid[nx][ny] != '1' && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    qx[rear] = nx;
                    qy[rear] = ny;
                    rear++;
                }
            }
        }
    }

    return -1;
}

struct Position {
    double x, y;
    double time_s;
};

void calculateSpeed(Position pos[], int n, double max_speed) {
    if (n < 2) {
        cout << "Khong du du lieu de tinh van toc.\n";
        return;
    }

    double highestSpeed = -1;
    double bestStart = 0, bestEnd = 0;

    cout << "Van toc tuc thoi:\n";

    for (int i = 1; i < n; i++) {
        double dx = pos[i].x - pos[i - 1].x;
        double dy = pos[i].y - pos[i - 1].y;
        double dt = pos[i].time_s - pos[i - 1].time_s;

        if (dt <= 0) {
            cout << "Tu giay " << pos[i - 1].time_s << " -> " << pos[i].time_s
                 << ": du lieu thoi gian khong hop le\n";
            continue;
        }

        double distance = sqrt(dx * dx + dy * dy);
        double speed = distance / dt;

        cout << "Tu giay " << pos[i - 1].time_s << " -> " << pos[i].time_s
             << ": " << speed << " m/s\n";

        if (speed > highestSpeed) {
            highestSpeed = speed;
            bestStart = pos[i - 1].time_s;
            bestEnd = pos[i].time_s;
        }
    }

    cout << "\nVan toc cao nhat: " << highestSpeed
         << " m/s (tu giay " << bestStart << " -> " << bestEnd << ")\n";

    cout << "\nKhoang thoi gian vuot toc do:\n";
    bool found = false;

    for (int i = 1; i < n; i++) {
        double dx = pos[i].x - pos[i - 1].x;
        double dy = pos[i].y - pos[i - 1].y;
        double dt = pos[i].time_s - pos[i - 1].time_s;

        if (dt <= 0) continue;

        double distance = sqrt(dx * dx + dy * dy);
        double speed = distance / dt;

        if (speed >= max_speed) {  
            found = true;
            cout << "Tu giay " << pos[i - 1].time_s << " -> " << pos[i].time_s
                 << " (" << speed << " m/s >= " << max_speed << " m/s)\n";
        }
    }

    if (!found) {
        cout << "Khong co khoang thoi gian nao vuot toc do.\n";
    }
}

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int calculatePathCost(vector<vector<int>>& grid, pair<int,int> from, pair<int,int> to) {
    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int>> dist(rows, vector<int>(cols, INF));
    priority_queue<
        pair<int, pair<int,int>>,
        vector<pair<int, pair<int,int>>>,
        greater<pair<int, pair<int,int>>>
    > pq;

    dist[from.first][from.second] = 0;
    pq.push({0, {from.first, from.second}});

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while (!pq.empty()) {
        int cost = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (x == to.first && y == to.second) return cost;
        if (cost > dist[x][y]) continue;

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols) {
                int newCost = cost + grid[nx][ny];
                if (newCost < dist[nx][ny]) {
                    dist[nx][ny] = newCost;
                    pq.push({newCost, {nx, ny}});
                }
            }
        }
    }

    return INF;
}

void findOptimalRoute(vector<vector<int>>& grid,
                      pair<int,int> start,
                      vector<pair<int,int>>& waypoints,
                      int max_distance) {
    int n = waypoints.size();

    if (n == 0) {
        cout << "Khong co waypoint.\n";
        cout << "Tong chi phi: 0\n";
        cout << "Pin con du: " << (0 <= max_distance ? "Co" : "Khong") << "\n";
        return;
    }

    vector<int> order;
    for (int i = 0; i < n; i++) order.push_back(i);

    int bestCost = INF;
    vector<int> bestOrder;

    do {
        int totalCost = 0;
        pair<int,int> current = start;
        bool valid = true;

        for (int i = 0; i < n; i++) {
            int idx = order[i];
            int cost = calculatePathCost(grid, current, waypoints[idx]);

            if (cost >= INF) {
                valid = false;
                break;
            }

            totalCost += cost;
            current = waypoints[idx];
        }

        if (valid && totalCost < bestCost) {
            bestCost = totalCost;
            bestOrder = order;
        }
    } while (next_permutation(order.begin(), order.end()));

    if (bestCost == INF) {
        cout << "Khong tim duoc lo trinh hop le.\n";
        return;
    }

    cout << "Thu tu toi uu: Bat dau";
    for (int i = 0; i < bestOrder.size(); i++) {
        cout << " -> Waypoint " << bestOrder[i];
    }
    cout << "\n";

    cout << "Tong chi phi: " << bestCost << "\n";

    if (bestCost <= max_distance) {
        cout << "Pin con du: Co (" << bestCost << " <= " << max_distance << ")\n";
    } else {
        cout << "Pin con du: Khong (" << bestCost << " > " << max_distance << ")\n";
    }
}


