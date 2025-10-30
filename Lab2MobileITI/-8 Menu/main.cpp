#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printMenuItems(string menu[], const int MENU_SIZE, int current){
    for (int i = 0; i < MENU_SIZE; i++) {
        if (i == current)
            cout << " -> " << menu[i] << "   " << endl;
        else
            cout << "    " << menu[i] << "   " << endl;
    }
}

void endProgram(){
    cout << "Program ends..." << endl;
    Sleep(3000);
}

int main() {
    string menu[] = {"File", "Save", "Edit", "Exit"};
    const int MENU_SIZE = 4;
    int current = 0;
    bool running = true;

    system("cls");
    cout << "=== Simple Menu App ===\n\n";

    while (running) {
        setCursorPosition(0, 2);
        printMenuItems(menu, MENU_SIZE, current);

        int key = _getch();
        if (key == 224) { 
            key = _getch();
            switch (key) {
                case 72: 
                    current--;
                    if (current < 0) current = MENU_SIZE - 1;
                    break;
                case 80:
                    current++;
                    if (current >= MENU_SIZE) current = 0;
                    break;
            }
        } 
        else if (key == 13) {
            
            setCursorPosition(0, MENU_SIZE + 4);
            cout << "You selected: " << menu[current] << "          " << endl;
            Sleep(1500);
            if (menu[current] == "Exit") {
                endProgram();;
                running = false;
            } else {
                setCursorPosition(0, MENU_SIZE + 4);
                cout << "                               " << endl;
            }

        }else if (key == 27) { // ESC key
            endProgram();
            running = false;
        }
    }

    return 0;
}
