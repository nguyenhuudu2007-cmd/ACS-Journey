#include <iostream>
using namespace std;

// Cấu trúc sinh viên
struct student {
    string name;
    int age;
    double gpa;
};

int main(){
    //khởi tạo một sinh viên
    student s1;
    s1.name= "Nguyen Van A";
    s1.age=20;
    s1.gpa=3.6;
    cout<<s1.name<<' '<<s1.age<<' '<<s1.gpa<<endl;
}
