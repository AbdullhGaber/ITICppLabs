#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,b,c;

  cout << "Enter a" << endl;
  cin >> a;

  cout << "Enter b" << endl;
  cin >> b;

  cout << "Enter c" << endl;
  cin >> c;


  float dis = pow(b,2) - (4 * a * c);

  int x1,x2;

  if(dis == 0){
    x1 = x2 = -(b) / (2 * a);
  }

  if(dis > 0){
    x1 = (-(b) + sqrt(dis) ) / (2 * a);
    x2 = (-(b) - sqrt(dis) ) / (2 * a);
  }

  if(dis < 0) {
    float real = (float) -(b) / 2 * a;
    float img = (float) (sqrt(-dis) / 2 * a) / 2 * a;
    cout << "Real : " << real << "\tImage : " << img;
    return 0;
  }

  cout << "x1 : " << x1 << "\t x2 :" << x2;

  return 0;
}
