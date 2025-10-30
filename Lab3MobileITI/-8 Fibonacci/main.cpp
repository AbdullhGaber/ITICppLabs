#include <iostream>

using namespace std;


unsigned long long int fibonacci(unsigned int n){
    unsigned int prev1 = 0;
    unsigned int prev2 = 1;
    unsigned long long int current = prev1 + prev2;
//1 2 3
    while(n-- > 3 ){
        prev1 = prev2;
        prev2 = current;
        current = prev1 + prev2;
    }

    return current;
}

int getMaxFib(){

    for(unsigned int i = 1; i <= 10000; i++){
        if(fibonacci(i) < fibonacci(i - 1)) {
            cout << "\n\nMax Fib = " << fibonacci(i- 1);
            break;
        }
        cout << fibonacci(i) << " ";
    }
}

int main()
{
    getMaxFib();
    return 0;
}

