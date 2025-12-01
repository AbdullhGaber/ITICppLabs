#include <iostream>
#include <cstring>

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
    Shape** shapes;
    int n;

    public:
    GeoShape(int n, Shape** shapes){
        this->n = n;
        this->shapes = shapes;
    }

    double getTotalArea(){
      double sum = 0;
      for(int i = 0; i < n; i++){
        sum+= shapes[i]->getArea();
      }
      return sum;
    }
};

int main()
{
    cout << "Enter number of shape you want to calculate its type" << endl;

    int n;
    cin >>n;

    Shape** shapes = new Shape*[n];

    for(int i = 0; i < n; i++){
        cout << "Enter the shape name [s for square, r for rectangle, c for circle, t for triangle]" << endl;
        char ch;
        cin >> ch;
        if(ch == 's'){
            cout << "Enter square sides" << endl;
            int sSide;
            cin >> sSide;
            shapes[i] = new Square(sSide);
        }else if(ch == 'r'){
            cout << "Enter Rectangle length" << endl;
            double length;
            cin >> length;

            cout << "Enter Rectangle width" << endl;
            double width;
            cin >> width;

            shapes[i] = new Rectangle(length, width);
        }else if(ch == 'c'){
            cout << "Enter Circle radius" << endl;
            double radius;
            cin >> radius;
            shapes[i] = new Circle(radius);
        }else{
            cout << "Enter Triangle base" << endl;
            double base;
            cin >> base;

            cout << "Enter Triangle height" << endl;
            double height;
            cin >> height;
            shapes[i] = new Triangle(base, height);
        }
    }

    cout << "\n\n===================\n\n";

    for(int i = 0; i < n; i++){
        cout << "Shape area = " << shapes[i]->getArea() << endl;
    }

    GeoShape* gShape = new GeoShape(n,shapes);

    cout << "total area = " << gShape->getTotalArea();

    delete gShape;

    delete[] shapes;

    return 0;
}
