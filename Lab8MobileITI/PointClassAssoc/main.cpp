#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Point{
  int x , y;
  public :
      Point(int x = 0, int y = 0){
         this->x = x;
         this->y = y;
      }

      void setX(int x){this->x = x;}
      void setY(int y){this->y = y;}

      int getX(){return x;}
      int getY(){return y;}
};

class Circle{
  double radius;
  Point *p1, *p2;

  public:
      Circle(Point *pa, Point *pb){
          p1 = pa;
          p2 = pb;
      }

      void setP1(int x, int y){
          p1->setX(x);
          p1->setY(y);
          setRadius();
      }

      void setP2(int x, int y){
          p2->setX(x);
          p2->setY(y);
          setRadius();
      }

     void setRadius(){
          radius = sqrt(pow(p2->getX() - p1->getX() ,2) + pow(p2->getY() - p1->getY(),2));
     }

      double getRadius(){return radius;}

      double calcArea(){
         return 3.14 * pow(radius,2);
      }

      double calcCirc(){
         return 2 * 3.14 * radius;
      }

};

int main() {
   Point p1(3,4);
   Point p2(16,30);
   Circle c(&p1, &p2);
   cout << c.getRadius() << endl;

   c.setP1(15,20);
   c.setP2(17,25);

   cout << c.getRadius() << endl;
   return 0;
}
