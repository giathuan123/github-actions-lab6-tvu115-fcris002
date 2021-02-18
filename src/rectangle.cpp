#include <rectangle.hpp>

Rectangle::Rectangle(): width(0), height(0) {}
Rectangle::Rectangle(int w, int h){
    if(w < 0) widht = -w;
    else widht = w;
    if(h < 0) height = -h;
    else height = h;
    
}

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