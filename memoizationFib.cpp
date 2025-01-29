#include <iostream>
#include <vector>

std::vector<int> memo;

int fib(int n) {
    if (memo[n] == -1) {
        int res;
        if (n == 0 || n == 1) {
            res = n;
        } else {
            res = fib(n - 1) + fib(n - 2);
        }
        memo[n] = res;
    }
    return memo[n];
}

int main() {
    int n = 5; // Example value, you can change it as needed
    memo.resize(n + 1, -1);
    std::cout << "Fibonacci of " << n << " is " << fib(n) << std::endl;
    return 0;
}
