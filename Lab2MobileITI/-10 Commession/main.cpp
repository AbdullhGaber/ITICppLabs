#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double BASE_SALARY = 200.00;
    const double COMMISSION_RATE = 0.09;

    double sales;

    cin >> sales;
    while (true) {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;

        if (sales == -1)
            break;

        double salary = BASE_SALARY + (COMMISSION_RATE * sales);

        cout << "Salary is: $" << salary << endl;
    }

    cout << "Program ended.\n";
    return 0;
}
