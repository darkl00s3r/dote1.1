#include <iostream>
#include <string>
using namespace std;

struct student{
    string name;
    int age;
    char grade;
};

int main(){

    student Liam;
    student Elia;

    Liam.name = "Liam";
    Liam.age = 20;
    Liam.grade = 'C';

    Elia.name = "Elia";
    Elia.age = 21;
    Elia.grade = 'A';

    cout << "Name: " << Liam.name << "\n";
    cout << "Age: " << Liam.age <<"\n";
    cout << "Grade: " << Liam.grade <<"\n\n";

    cout << "Name: " << Elia.name << "\n";
    cout << "Age: " << Elia.age <<"\n";
    cout << "Grade: " << Elia.grade <<"\n";

    return 0;
}