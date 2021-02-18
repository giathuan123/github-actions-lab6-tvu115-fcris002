#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int w,int h);

        void set_width(int w);
        int get_width() const
        {return width;}
        int get_height() const
        {return height;}
        void set_height(int h);
        int area();
        int perimeter();
};

#endif
