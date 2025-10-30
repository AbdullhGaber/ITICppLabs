#include <iostream>
#include <cmath>

using namespace std;

int hypotenuse(int a, int b){
    double c = sqrt(pow(a,2) + pow(b,2));
    return (int) c;
}
int main()
{
    int a;
    cout << "Enter Triangle First Side" << endl;
    cin >> a;

    int b;
    cout << "Enter Triangle Second Side" << endl;
    cin >> b;

    int hypo = hypotenuse(a,b);

    cout << "hypotenuse = " << hypo << endl;

    return 0;
}

