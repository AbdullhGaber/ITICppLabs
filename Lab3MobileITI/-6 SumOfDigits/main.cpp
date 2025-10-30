#include <iostream>

using namespace std;

int sumDigit(int num){
  int sum = 0;

  while(num > 0){
    sum += num % 10;
    num/= 10;
  }

  return sum;
}


int main()
{
    cout << "Enter number" << endl;
    int num;

    cin >> num;

    int sum = sumDigit(num);

    cout << "Digits sum = " << sum << endl;

    return 0;
}

