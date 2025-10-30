#include <iostream>
#include <cmath>

using namespace std;

int isRightTriangle(int a, int b, int c){
    return c == (sqrt(pow(a,2) + pow(b,2)));
}

int main()
{
    int a;
    cout << "Enter Triangle First Side (Altitude)" << endl;
    cin >> a;
    while(a < 0) {
        cout << "Side must be greater than zero" << endl;
        cin >> a;
    }


    int b;
    cout << "Enter Triangle Second Side (Base)" << endl;
    cin >> b;
     while(b < 0) {
        cout << "Side must be greater than zero" << endl;
        cin >> b;
    }

    int c;
    cout << "Enter Triangle Third Side (Hypotenuse)" << endl;
    cin >> c;
    while(c < 0) {
        cout << "Side must be greater than zero" << endl;
        cin >> c;
    }

    if(isRightTriangle(a,b,c)){
        cout << "Triangle is Right";
    }else{
        cout << "Triangle is not Right";
    }

    return 0;
}

