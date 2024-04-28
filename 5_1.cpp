#include<iostream>

class Rectangle
{
    protected:float length;  float width;
    public:
        Rectangle(float length,float width):length(length),width(width){}

        float area()
        {
            return length*width;
        }

        void disp()
        {
            std::cout<<area();
        }
};

class Cuboid:public Rectangle
{
    protected:float height;
    public:
        Cuboid(float length, float width, float height): Rectangle(length, width), height(height) {}
        float calv()
        {
            return area()*height;
        }

        void disp()
        {
            Rectangle::disp();
            std::cout<<" "<<calv();
        }
};

int main()
{
    float a, b, c;
    std::cin>>a>>b>>c;
    Cuboid cuboid(a,b,c);
    cuboid.disp();
    return 0;
}