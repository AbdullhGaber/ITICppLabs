#include <iostream>
#include <cmath>

using namespace std;

int isTriangleSideNotValid(double a, double b, double c){
    return (a + b) <= c || (a + c) <= b || (b + c) <= a;
}

double calcTrinagleArea(double a, double b, double c){
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    double a;
    cout << "Enter Triangle First Side" << endl;
    cin >> a;
    while(a < 0) {
        cout << "Side must be greater than zero" << endl;
        cin >> a;
    }


    double b;
    cout << "Enter Triangle Second Side" << endl;
    cin >> b;
     while(b < 0) {
        cout << "Side must be greater than zero" << endl;
        cin >> b;
    }

    double c;
    cout << "Enter Triangle Third Side" << endl;
    cin >> c;
    while(c < 0) {
        cout << "Side must be greater than zero" << endl;
        cin >> c;
    }

    while(isTriangleSideNotValid(a,b,c)){
        cout << "Please enter valid triangle sides" << endl;

        cout << "Enter 1st side" << endl;
        cin >> a;

        cout << "Enter 2nd side" << endl;
        cin >> b;

        cout << "Enter 3rd side" << endl;
        cin >> c;
    }

    double area = calcTrinagleArea(a,b,c);

    cout << "Area of Triangle = " << area;

    return 0;
}

