#include <iostream>

using namespace std;

int main()
{
    int depth;
    cout << "Enter depth" << endl;
    cin >> depth;
    int cels = 10 * depth + 20;
    double feh = 1.8 * cels + 32;

    cout << "Celsius : " << cels << endl;
    cout << "Fehrenhiet : " << feh << endl;
    return 0;
}

