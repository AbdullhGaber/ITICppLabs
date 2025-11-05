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
    const int HOME_KEY = 71;
    const int END_KEY = 79;
    // const int MAX_CHARS_LENGTH = 10;

    //char content[MAX_CHARS_LENGTH + 1] = "";
    cout << "Enter Text Size" << endl;

    int textSize;
    cin >> textSize;
    system("cls");
    char* content = new char[textSize];
    char* ptr = content;
    for(int i = 0; i < textSize; i++){
        *(ptr + i) = NULL;
    }

    int pos = 0;
    int x = 0;
    int running = 1;
    int length = 0;

    while (running) {
         setCursorPosition(x, 0);
        char ch = _getch();

        if (ch == 0 || ch == -32) { // extended key
            ch = _getch();
            switch (ch) {
                case RIGHT_ARROW_KEY:
                    if (x < length) {
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

                case HOME_KEY:
                    pos = x = 0;
                    break;

                case END_KEY:
                    pos = x = length;
                    break;
            }
        } else if (ch == ENTER_KEY) {
            setCursorPosition(0, 3);
            cout << "Your line: ";
            for (int i = 0; i < length; i++) cout << content[i];
        } else if (ch == ESC_KEY) {
            setCursorPosition(0, 3);
            cout << string(80, ' ');
            setCursorPosition(0, 3);
            cout << "Program Ends ....";
            running = 0;
        } else if (isprint(ch)) {
            if (pos < textSize) {
                *(content + pos) = ch;
                pos++;
                if (pos > length) length = pos;
                cout << ch;
                x++;
            }
        }
    }

    delete[] content;

    return 0;
}
