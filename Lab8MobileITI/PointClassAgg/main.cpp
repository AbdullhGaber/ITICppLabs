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
  Point p1 ,p2;
  double radius;

  public:
      Circle(int x1 = 0, int y1 = 0 , int x2 = 0, int y2 = 0) : p1(x1,y1), p2(x2,y2){
          setRadius();
      }

     void setP1(int x, int y){
          p1.setX(x);
          p1.setY(y);
          setRadius();
      }

      void setP2(int x, int y){
          p2.setX(x);
          p2.setY(y);
          setRadius();
      }

      void setRadius(){
          radius = sqrt(pow(p2.getX() - p1.getX() ,2) + pow(p2.getY() - p1.getY(),2));
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
   Circle c(3, 4);
   cout << c.getRadius() << endl;
   c.setP1(15,20);
   c.setP2(17,25);
   cout << c.getRadius() << endl;

   return 0;
}
