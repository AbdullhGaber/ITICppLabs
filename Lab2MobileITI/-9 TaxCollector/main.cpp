#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double STATE_TAX_RATE = 0.04;
    const double COUNTY_TAX_RATE = 0.05;

    double totalCollected;

    while (true) {
        cout << "Enter total amount collected (-1 to quit): ";
        cin >> totalCollected;

        if (totalCollected == -1)
            break;

        string month;
        cout << "Enter name of month: ";
        cin >> month;

        double sales = totalCollected / (1 + STATE_TAX_RATE + COUNTY_TAX_RATE);
        double countyTax = sales * COUNTY_TAX_RATE;
        double stateTax = sales * STATE_TAX_RATE;
        double totalTax = countyTax + stateTax;

        cout << "\nTotal Collections: $ " << totalCollected << endl;
        cout << "Sales: $ " << sales << endl;
        cout << "County Sales Tax: $ " << countyTax << endl;
        cout << "State Sales Tax: $ " << stateTax << endl;
        cout << "Total Sales Tax Collected: $ " << totalTax << endl << endl;
    }

    cout << "Program ended.\n";
    return 0;
}
