#include <iostream>
using namespace std;

int main() {
    int a[10];
    int b[10];
    int common[10];
    int commonCount = 0;

    const int n = sizeof(a) / sizeof(a[0]); 
    cout << "Enter first 10 numbers" << endl;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "=============" << endl;
    cout << "Now enter the second 10 numbers" << endl;

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < sizeof(b) / 4; j++){
            if(a[i] == b[j]){
                int found = 0;

                for(int k = 0; k < commonCount; k++){
                    if(a[i] == common[k]){
                        found = 1;
                        break;
                    }
                }

                if(!found){
                    common[commonCount] = a[i];
                    commonCount++;
                }
            }
        }


    cout << "=============" << endl;
    if (commonCount == 0) {
        cout << "No common elements found." << endl;
    } else {
        cout << "Unique common elements are:" << endl;
        cout << "[ ";
        for (int i = 0; i < commonCount; i++) {
            cout << common[i] << " ";
        }
        cout << "]" << endl;
    } 
       
    return 0;
}
