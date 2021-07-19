#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_perfect(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        current = current % 10;
    }

    return current % 10;
}

int main() {
    int n;
    std::cin >> n;
    // int c = get_fibonacci_last_digit_naive(n);
    int c = get_fibonacci_last_digit_perfect(n);
    std::cout << c << '\n';
    }
