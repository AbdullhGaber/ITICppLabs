#include <iostream>

using namespace std;


int numberPower(int base, int exponent){
    if(exponent < 1) return 1;
    return base * numberPower(base, exponent - 1);
}


int main()
{
    cout << "Enter base number" << endl;
    int base;
    cin >> base;

    cout << "Enter power number" << endl;
    int exponent;
    cin >> exponent;

    int result = numberPower(base, exponent);

    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0;
}

