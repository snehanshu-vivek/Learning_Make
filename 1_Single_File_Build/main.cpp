#include<iostream>
using namespace std;

class Rectangle {
    public:
    Rectangle(int l, int b) {
        l = l;
        b = b;
    }
    int perimeter(int l, int b) {
        return 2*(l+b);
    }
    int area(int l, int b) {
        return l*b;
    } 
    private:
    int l, b;
};

int main() {
    cout<<"Hello World!"<<endl;
    Rectangle r = Rectangle(10, 20);
    cout<<r.perimeter(10, 20)<<endl;
    cout<<r.area(10, 20)<<endl;
    return 0;
}