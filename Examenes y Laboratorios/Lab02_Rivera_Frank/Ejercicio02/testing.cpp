#include <iostream>
using namespace std;
class Shapes{
    public:
    void setWidth(int w){
        width = w;
    }

    void setHeight(int h){
        height = h;
    }

    protected:
    int width;
    int height;
};

class Rectangle: public Shapes{
    public:
    int getArea(){
        return (width * height);
    }
};

class Triangle: public Shapes{
    public:
    int getArea(){
        return (width * height)/2;
    }
};

int main(){
    Rectangle rect;
    Triangle tri;

    rect.setWidth(5);
    rect.setHeight(7);

    tri.setWidth(5);
    tri.setHeight(7);

    cout << "Total Rectangle area: " << rect.getArea() << endl;
    cout << "Total Triangle area: " << tri.getArea() << endl;

    return 0;
}