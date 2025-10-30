#include <iostream>

using namespace std;

int main(){
  cout << "Enter Color character between [o - b - y - g]" << endl;
  char ch;
  cin >> ch;

  while(tolower(ch) != 'o' && tolower(ch) != 'b' &&  tolower(ch) != 'y' && tolower(ch) != 'g'){
    cout << "Invalid Character Please Try Again.." << endl;
    cin >> ch;
  }

  switch (ch) {
    case 'O':
    case 'o':
       cout << "ammonia";
       break;

    case 'B' :
    case 'b' :
       cout << "carbon monoxide";
       break;

    case 'Y':
    case 'y' :
       cout << "hydrogen";
       break;

    case 'G':
    case 'g' :
       cout << "oxygen";
       break;

    default :
        break;
  }


  return 0;
}
