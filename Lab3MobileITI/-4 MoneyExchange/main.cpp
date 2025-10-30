#include <iostream>
#include <cmath>

using namespace std;

double fromUSDToYen(double usd){
    return usd * 118.87;
}

double fromUSDToEuro(double usd){
    return usd * 0.92;
}

int main()
{

    cout << "----------------------------------------------------\n";
    cout << "\t" << "USD" << "\t" << "Yen" << "\t\t" << "Euro" << endl;
    cout << "----------------------------------------------------\n";

    for (double usd = 1.0; usd <= 1000.0; usd*=10) {
        cout << "\t" << usd
             << "\t" << fromUSDToYen(usd)
             << "\t\t" << fromUSDToEuro(usd)
             << endl;
    }

    cout << "----------------------------------------------------\n";

    return 0;
}

