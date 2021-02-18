#include <rectangle.hpp>
#include <cstdlib>

using namespace std;

Rectangle::Rectangle(): width(0), height(0) {}
Rectangle::Rectangle(int w, int h){
   if (w < 0) width = -w;
   // int  width = -w;
  // else width = w;
  // if (h < 0) height = h;
   if (h < 0) height = -h;
   // int height = -h;
}

void Rectangle::set_width(int w)
{
  width = w;
}
void Rectangle::set_height(int h)
{
  height = h;
}

int Rectangle::area()
{
  return width*height;
}

int Rectangle::perimeter()
{
  return 2*width + 2*height;
}
