#include "./rectangle.h"
Rectangle::Rectangle(int l, int b) {
        l = l;
        b = b;
};
int Rectangle::perimeter(int l, int b) {
        return 2*(l+b);
    }
int Rectangle::area(int l, int b) {
    return l*b;
}