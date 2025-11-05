#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>
using namespace std;

void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    system("cls");

    const int LEFT_ARROW_KEY = 75;
    const int RIGHT_ARROW_KEY = 77;
    const int ESC_KEY = 27;
    const int ENTER_KEY = 13;
    const int MAX_CHARS_LENGTH = 10;

    char content[MAX_CHARS_LENGTH + 1] = "";
    int pos = 0; 
    int x = 0;     
    bool running = true;

    while (running) {
        setCursorPosition(x, 0);
        char ch = _getch();

        if (ch == 0 || ch == -32) { // extended key
            ch = _getch();
            switch (ch) {
                case RIGHT_ARROW_KEY:
                    if (x < strlen(content)) {
                        x++;
                        pos++;
                    }
                    break;
                case LEFT_ARROW_KEY:
                    if (x > 0) {
                        x--;
                        pos--;
                    }
                    break;
            }
        } else if (ch == ENTER_KEY) {
            setCursorPosition(0, 3);
            cout << "Your line: " << content;
        } else if (ch == ESC_KEY) {
            setCursorPosition(0, 3);
            cout << "                                                                             ";
            setCursorPosition(0, 3);
            cout << "Program Ends ....";
            running = false;
        } else if (isprint(ch)) {  // normal character
            if (pos < MAX_CHARS_LENGTH) {
                content[pos] = ch;
                pos++;
                content[pos] = '\0'; // null-terminate string
                cout << ch;
                x++;
            }
        }
    }

    return 0;
}
