#include <iostream>
#include <cstring>
using namespace std;

class Base{
  protected:
     int z;
  public:
    Base(){
      z = 0;
    }

    Base(int m){z = m;}

    void setZ(int z){this->z = z;}
    int getZ(){return z;}
};

class Base1 : virtual public Base{
  protected:
      int x;
  public:
    Base1(){
      x = 0;
    }

    Base1(int m): Base(m){x = m;}

    void setX(int x){this->x = x;}
    int getX(){return x;}
};

class Base2 : virtual public Base{
protected:
      int y;
  public:
    Base2(){
      y = 0;
    }

    Base2(int m) : Base(m) {y = m;}

    void setY(int y){this->y = y;}
    int getY(){return y;}
};

class Derived : public Base1, public Base2{
   public:
       Derived(){}
       Derived(int m, int n) : Base2(m), Base1(n){}
       int product(){return x * y * z;}
};
int main(){
  Derived d(3,4);


  return 0;
}
