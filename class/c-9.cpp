#include <iostream>
using namespace std;

// topic
// recursion
// fibonacci series

int fibo(int n) {

    if(n == 1) return 1;
    if(n == 0) return 0;

    int x = fibo(n-1);
    int y = fibo(n-2);
    return x + y;
}


int main() {
   
    int n = 10;
    int fib_num = fibo(n);
    cout << fib_num;
}
