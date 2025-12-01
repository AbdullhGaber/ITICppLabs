#include <iostream>

using namespace std;

class Shape {
    public:
    virtual double getArea() = 0;
};

class Circle : public Shape{
    double radius;

    public:
      Circle(double r = 0){radius = r;}

      virtual double getArea(){
         return 3.14 * (radius * radius);
      };
};

class Rectangle : public Shape{
    double length,width;

    public:
      Rectangle(double l = 0, double w = 0){
          length = l;
          width = w;
      }

      virtual double getArea(){
         return length * width;
      };
};

class Triangle : public Shape{
   double base, height;

    public:
      Triangle(double b = 0, double h = 0){
          base = b;
          height = h;
      }

      virtual double getArea(){
         return .5 * base * height;
      }
};

class Square : public Rectangle{
    public:
      Square(double l = 0) : Rectangle(l,l){}
};

class GeoShape{
    Shape* shapes[4];

    public:
    GeoShape(Shape *c, Shape *r, Shape *s, Shape *t){
       shapes[0] = c;
       shapes[1] = r;
       shapes[2] = s;
       shapes[3] = t;
    }

    double getTotalArea(){
      double sum = 0;
      for(int i = 0; i < 4; i++){
        sum+= shapes[i]->getArea();
      }
      return sum;
    }
};

int main()
{
    Circle c(7);
    Rectangle r(5,20);
    Square s(6);
    Triangle t(20,10);

    GeoShape gShape(&c,&r,&s,&t);

    cout << "Circle Area = " << c.getArea() << endl;
    cout << "Rectangle Area = " << r.getArea() << endl;
    cout << "Square Area = " << s.getArea() << endl;
    cout << "Triangle Area = " << t.getArea() << endl;
    cout << gShape.getTotalArea();

    return 0;
}
