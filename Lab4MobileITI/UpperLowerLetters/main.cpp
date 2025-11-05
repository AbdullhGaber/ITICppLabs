#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char text[101];
   cout << "Enter Text" << endl;
   cin >> text;

   for(int i = 0; i < strlen(text); i++){
      if(i % 2 == 0){
        cout << (char) toupper(text[i]);
      }else{
        cout << (char) tolower(text[i]);
      }
   }
}
