#include<iostream>
using namespace std;

void myrefswap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
}

void mypointswap(int *a, int *b){
    int temp = *a;
    a = b;
    *b = temp;
    
}

int main(){

    int x = 50;
    int y = 29;
    myrefswap(x,y);
    cout << "With the reference swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    mypointswap(x,y);
    cout << "With the pointer swap:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
     


    return 0;
}