#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SALESPEOPLE = 4;   // Salespeople numbered 1–4
    const int PRODUCTS = 5;      // Products numbered 1–5

    double sales[PRODUCTS][SALESPEOPLE] = {0};  // 2D array for total sales

    int salesperson, product;
    double amount;

    cout << "Enter sales data (salesperson product amount)." << endl;
    cout << "Enter -1 to stop.\n";

    while (1) {
        cout << "\nEnter salesperson number (1-4, or -1 to end): ";
        cin >> salesperson;
        if (salesperson == -1)
            break;

        cout << "Enter product number (1-5): ";
        cin >> product;

        cout << "Enter total dollar value of product sold: ";
        cin >> amount;

        // Validate input
        if (salesperson < 1 || salesperson > SALESPEOPLE ||
            product < 1 || product > PRODUCTS || amount < 0) {
            cout << "Invalid input, please try again.\n";
            continue;
        }

        // Add the amount to the correct cell
        sales[product - 1][salesperson - 1] += amount;
    }

    cout << "\n---------------------------------------------\n";
    cout << "Product";

    // Print header (salespeople)
    for (int sp = 1; sp <= SALESPEOPLE; ++sp)
        cout << "\tSalesperson" << sp;
    cout << setw(12) << "Total\n";

    cout << "---------------------------------------------\n";

    double salespersonTotal[SALESPEOPLE] = {0};

    // Process each product (row)
    for (int i = 0; i < PRODUCTS; ++i) {
        double productTotal = 0;
        cout << "\tProduct " << i + 1;

        // Each salesperson's sales for this product
        for (int j = 0; j < SALESPEOPLE; ++j) {
            cout << "\t" << sales[i][j];
            productTotal += sales[i][j];
            salespersonTotal[j] += sales[i][j];
        }

        cout << "\t" << productTotal << endl;
    }

    cout << "---------------------------------------------\n";
    cout << "\tTotal";

    double grandTotal = 0;
    for (int j = 0; j < SALESPEOPLE; ++j) {
        cout << "\t" << salespersonTotal[j];
        grandTotal += salespersonTotal[j];
    }

    cout << "\t" << grandTotal << endl;
    cout << "---------------------------------------------\n";

    return 0;
}
