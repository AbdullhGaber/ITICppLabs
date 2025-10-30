#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharges(int hours) {
    const double minFee = 25.00;
    const double maxPerDay = 50.00;
    const double taxPerHour = 0.50;

    if (hours <= 0) return 0.0;

    int fullDays = hours / 24;
    int remHours = hours % 24;

    double charge = fullDays * maxPerDay;

    if(remHours <= 8) {
        charge += minFee;
    }else {
        charge += maxPerDay;
    }

    charge += taxPerHour * hours;

    return charge;
}

int main() {
    const int customers = 3;
    int hours[customers];
    double charges[customers];
    int totalHours = 0;
    double totalCharges = 0.0;

    cout << "Enter hours rented for 3 customers:\n";
    for (int i = 0; i < customers; ++i) {
        cout << "Customer " << i + 1 << ": ";
        cin >> hours[i];
        charges[i] = calculateCharges(hours[i]);
        totalHours += hours[i];
        totalCharges += charges[i];
    }

    cout << fixed << setprecision(2) << "\n";
    cout << "Car\tHours\tCharge\n";
    for (int i = 0; i < customers; ++i) {
        cout << (i + 1) << '\t' << hours[i] << '\t' << charges[i] << '\n';
    }
    cout << "TOTAL\t" << totalHours << '\t' << totalCharges << '\n';

    return 0;
}
