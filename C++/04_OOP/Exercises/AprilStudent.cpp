#include <bits/stdc++.h>
using namespace std;

struct Sv{
    string name;
    string date;
    string address;
    double gpa;
};

void input ( Sv &s ){
    getline ( cin, s.name );
    getline ( cin, s.date );
    getline ( cin, s.address );
    cin>>s.gpa;
}

void output ( const Sv &s ){
    cout<<s.name<<endl;
    cout<<s.date<<endl;
    cout<<s.address<<endl;
    cout<<s.gpa<<endl;
}

string getSortedName ( const string &name ){
    stringstream ss(name);
    string token;
    vector<string> parts;
    while (getline(ss, token, ' ')){
        if (!token.empty())
            parts.push_back(token);
    }
    if (parts.empty())
        return string();

    string res = parts.back();
    for (size_t i = 0; i + 1 < parts.size(); i++){
        res += " ";
        res += parts[i];
    }
    return res;
}

int getMonth ( const string &date ){
    stringstream ss(date);
    string token;
    getline(ss, token, '/');
    getline(ss, token, '/');
    return stoi(token);
}

bool cmp ( const Sv &a, const Sv &b ){
    int monthA = getMonth(a.date);
    int monthB = getMonth(b.date);
    if (monthA != monthB)
        return monthA < monthB;
    return getSortedName(a.name) < getSortedName(b.name);
}

int main(){
    int n; cin>>n;
    vector<Sv> a;
    for ( int i=0;i<n;i++){
        cin.ignore();
        Sv s;
        input ( s );
        a.push_back(s);
    }

    stable_sort(a.begin(), a.end(), cmp);

    for (const Sv &s : a){
        output(s);
    }

    return 0;
}