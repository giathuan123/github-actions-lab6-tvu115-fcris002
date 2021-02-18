#include <rectangle.hpp>

Rectangle::Rectangle(): width(0), height(0) {}
Rectangle::Rectangle(int w, int h):width(w), height(h){}

void Rectangle::set_width(int w)
{
    width = w;
}
void Rectange::set_height(int h)
{
    height = h;
}

int Rectange::area()
{
    return w*h;
}

int Rectangle::perimeter()
{
    return 2*w + 2*h;
}