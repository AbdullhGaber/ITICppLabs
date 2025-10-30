#include <iostream>
using namespace std;

int main() {
    const int baseSalary = 200;
    const double commissionRate = 0.09;

    const int size = 9;
    int counters[size] = {0};

    int sales;

    cout << "Enter gross sales for each salesperson (-1 to end):\n";

    while (true) {
        cout << "Enter sales: ";
        cin >> sales;

        if (sales == -1) break;

        int salary = baseSalary + (sales * commissionRate);

        if (salary >= 1000)
            ++counters[8];
        else
            ++counters[(salary - 200) / 100];
    }

    cout << "\nSalary ranges:\n";
    cout << "a) $200 to 299 : " << counters[0] << endl;
    cout << "b) $300 to 399 : " << counters[1] << endl;
    cout << "c) $400 to 499 : " << counters[2] << endl;
    cout << "d) $500 to 599 : " << counters[3] << endl;
    cout << "e) $600 to 699 : " << counters[4] << endl;
    cout << "f) $700 to 799 : " << counters[5] << endl;
    cout << "g) $800 to 899 : " << counters[6] << endl;
    cout << "h) $900 to 999 : " << counters[7] << endl;
    cout << "i) $1000 and over : " << counters[8] << endl;

    return 0;
}
