#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    //double getWidht() const;
    double getArea() const;
    //double getWidht() const;
    double getCircum() const;
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    void tulostaSuorakulmio() const;
};

#endif // RECTANGLE_H
