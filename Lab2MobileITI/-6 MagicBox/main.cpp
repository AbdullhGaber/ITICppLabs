#include <iostream>
#include <windows.h>
using namespace std;

void setCursorPosition(int x, int y){
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
  cout << "Enter Box Size" << endl;

  int oddSize;
  cin >> oddSize;

  while(!(oddSize % 2)) {
    cout << "Please enter Odd Size" << endl;
    cin >> oddSize;
  }

  int r = 1, col = (oddSize + 1) / 2;
cout << "n = " << 1 << "\t row = " << r << "\t col = " << col << endl;

  for(int num = 2; num <= (oddSize * oddSize); num++){

     if( (num - 1) % oddSize){
        r--;
        col--;
     }// has rem
     else{
        r++;
     }// no rem

     if(r < 1) r = oddSize;
     if(r > oddSize) r = 1;
     if(col < 1) col = oddSize;

     cout << "n = " << num << "\t row = " << r << "\t col = " << col << endl;

  }


  return 0;
}
