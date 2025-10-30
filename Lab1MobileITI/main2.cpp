#include <iostream>>

using namespace std;

int main()
{
    cout << "Enter yard length" << endl;
    int yardLength;
    cin >> yardLength;

    cout << "Enter yard width" << endl;
    int yardWidth;
    cin >> yardwidth;

    cout << "Enter house length" << endl;
    int houseLength;
    cin >> houseLength;

    cout << "Enter house width" << endl;
    int houseWidth;
    cin >> housewidth;

    int houseArea = houseWidth * houseHeight;

    int yardArea = yardWidth * yardHeight;

    int grassArea = yardArea - houseArea;

    int time = grassArea / 2;

    cout << "Time required : " << time << "s";

    return 0;
}

