#include <iostream>
#include <string>
using namespace std;

int main(){
    struct {
        string name;
        int age;
        char grade;
    } student;

    student.name = "Liam";
    student.age = 20;
    student.grade = 'C';

    cout << "Name: " << student.name << "\n";
    cout << "Age: " << student.age <<"\n";
    cout << "Grade: " << student.grade <<"\n";


    return 0;
}