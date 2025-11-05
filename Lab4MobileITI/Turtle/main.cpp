#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 50;
    int floor[SIZE][SIZE] = {0};   // 50x50 floor
    int x = 0, y = 0;              // current position (start at top-left)
    int penDown = 0;
    int direction = 1;             // 0=up, 1=right, 2=down, 3=left (starts facing right)
    int command = 0, steps = 0;

    cout << "Turtle Graphics Simulation\n";
    cout << "Commands:\n";
    cout << "1 - Pen up\n";
    cout << "2 - Pen down\n";
    cout << "3 - Turn right\n";
    cout << "4 - Turn left\n";
    cout << "5,n - Move forward n spaces\n";
    cout << "6 - Display drawing\n";
    cout << "9 - End of program\n\n";

    cout << "Enter commands (example: 2 5,12 3 5,12 3 5,12 3 5,12 1 6 9):\n\n";

    while (1) {
        cin >> command;
        if (command == 9) break; // end program

        if (command == 1) { // Pen up
            penDown = 0;
        } 
        else if (command == 2) { // Pen down
            penDown = 1;
        } 
        else if (command == 3) { // Turn right
            direction = (direction + 1) % 4;
        } 
        else if (command == 4) { // Turn left
            direction = (direction + 3) % 4;
        } 
        else if (command == 5) { // Move forward
            char comma;
            cin >> comma >> steps; // read comma and steps (like 5,12)

            for (int i = 0; i < steps; i++) {
                // mark position if pen is down
                if (penDown)
                    floor[y][x] = 1;

                // move according to direction (check bounds)
                if (direction == 0 && y > 0) y--;                // up
                else if (direction == 1 && x < SIZE - 1) x++;    // right
                else if (direction == 2 && y < SIZE - 1) y++;    // down
                else if (direction == 3 && x > 0) x--;           // left
            }

            if (penDown)
                floor[y][x] = 1;
        } 
        else if (command == 6) { // Print floor
            cout << "\nDrawing:\n\n";
            for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                    cout << (floor[i][j] ? '*' : ' ');
                }
                cout << endl;
            }
            cout << endl;
        } 
        else {
            cout << "Invalid command, try again.\n";
        }
    }

    cout << "\nProgram ended.\n";
    return 0;
}
