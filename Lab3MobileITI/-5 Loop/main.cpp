#include <iostream>

using namespace std;

int main()
{

    double sales[20];
    for (int i = 0; i < 20; i++) {
        cout << "Enter sales[" << i << "]: ";
        cin >> sales[i];
    }

    double allowance[75];
    for (int i = 0; i < 75; i++) {
        allowance[i] += 1000;
    }

    int numbers[50];
    for (int i = 0; i < 50; i++) {
        numbers[i] = 0;
    }

    int GPA[10];
    for (int i = 0; i < 10; i++) {
        cout << GPA[i] << endl;
    }

    return 0;
}

