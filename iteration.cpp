#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0)
          return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = fact * i;
        i--;
    }
    return fact;
}

int main() {
    int n = 5;
    cout << factorial(n);
}
