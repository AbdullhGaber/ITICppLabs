#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout << "Enter n to determine series equation\n";

  int n;
  cin >> n;

  double PI = 0;
  double denominator  = 1;
  int sign = 1;

  for(int i = 1; i <= n; i++){
    cout << (sign == 1 ? "+ " : "- ") << "1/" << denominator << " ";
    PI += sign * (1/denominator ) ;
    denominator += 2;
    sign *= -1;
  }

  PI*= 4;

  cout << "PI = " << PI;
  return 0;
}
