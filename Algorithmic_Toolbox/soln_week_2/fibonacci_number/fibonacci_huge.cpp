#include <iostream>
#include <vector>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long get_fibonacci_huge_fast(long long n, long long m){
    std::vector<int> fibonaccis(m+1);
    std::vector<int> modpatt(m+1);

    fibonaccis[0] = 0;
    modpatt[0] = 0;
    // std::cout << "fib 0 : "<<fibonaccis[0]  << "\n";
    fibonaccis[1] = 1;
    modpatt[1] = 1;
    // std::cout << "fib 1 : "<<fibonaccis[1]  << "\n";
    for (int i = 0; i < m-1; i++)
    {
        fibonaccis[i+2] = fibonaccis[i] + fibonaccis[i+1];
        for (int j = 0; j <= i ; j++)
        {
            modpatt[j] == fibonaccis[j] ? 
        }
        
        // std::cout << "fib : "<< i+2 << " : " <<  fibonaccis[i+2]  << "\n";
    }

}

int main() {
    long long n, m;
    std::cin >> n >> m;
    // std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
