#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int m;
    std::cin >> m;
    
    std::vector<long long> numbers(m);
    for (int i = 0; i < m; i++) {
        std::cin >> numbers[i];
    }
    
    for (int i = 0; i < m; i++) {
        long long n = numbers[i];
        long long sum = 0;
        
        // Find all proper divisors and sum them
        for (long long j = 1; j * j <= n; j++) {
            if (n % j == 0) {
                sum += j;  // j is a divisor
                
                // Add the corresponding divisor (n/j) if it's different from j and not n itself
                if (j != n / j && n / j != n) {
                    sum += n / j;
                }
            }
        }
        
        // Check if sum of proper divisors equals the number
        if (sum == n) {
            std::cout << "1\n";
        } else {
            std::cout << "0\n";
        }
    }
    
    return 0;
}