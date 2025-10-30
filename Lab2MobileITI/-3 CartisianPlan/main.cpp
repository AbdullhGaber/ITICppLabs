#include <iostream>

using namespace std;

int main(){
  cout << "Enter x :" << endl;
  double x;
  cin >> x;

  cout << "===============================================================" << endl;

  cout << "Enter y :" << endl;
  double y;
  cin >> y;

  if(x == 0){
    if(y == 0) cout << "Origin";
    else cout << "y axis";
  }
  else if(y == 0){
    cout << "x axis";
  }else{

    if(x > 0 && y > 0){
        cout << "Q1";
    }

    if(x > 0 && y < 0) {
        cout << "Q4";
    }

    if(x < 0 && y > 0){
        cout << "Q2";
    }

    if(x < 0 && y < 0){
        cout << "Q3";
    }

  }
  return 0;
}
