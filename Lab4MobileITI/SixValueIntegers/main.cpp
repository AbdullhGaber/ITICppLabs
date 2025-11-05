#include <iostream>
#include <cstring>
using namespace std;

int charArrayToInt(const char arr[]) {
    int num = 0;
    int sign = 1;
    int i = 0;

    if (arr[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (arr[i] != '\0') {
        if (arr[i] >= '0' && arr[i] <= '9') {
            num = num * 10 + (arr[i] - '0');
        } else {
            cout << "Invalid character '" << arr[i] << "' in input!\n";
            return 0;
        }
        i++;
    }

    return num * sign;
}

int main() {
    const int SIZE = 6;
    const int MAX_LENGTH = 20;
    char input[MAX_LENGTH];
    int numbers[SIZE];
    int sum = 0;

    cout << "Enter six integers (as char arrays):" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Input " << i + 1 << ": ";
        cin >> input;

        numbers[i] = charArrayToInt(input);
        sum += numbers[i];
    }

    double average =  (double) sum / SIZE;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
