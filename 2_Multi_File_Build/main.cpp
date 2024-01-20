#include<iostream>
#include "./rectangle.h"
using namespace std;

int main() {
    cout<<"Hello World!"<<endl;
    Rectangle r = Rectangle(10, 20);
    cout<<r.perimeter(10, 20)<<endl;
    cout<<r.area(10, 20)<<endl;
    return 0;
}