#include <iostream>
#include <cstring>

/**
 * Xác định một số có phải số nguyên tố hay không sử dụng phương pháp sàng nguyên tố Eratothenes
 * @param n - số cần xác định
 * @return true nếu là số nguyên tố
 * @return false nếu không phải là số nguyên tố
 * @time_complexity O(n*lglg(n))
 */
bool is_prime_sieve_of_eratothenes(int n) {
    bool a[n + 1];
    memset(a, true, n + 1);
    for (int j = 2; j * j <= n; j++) {
        if (a[j]) {
            for(int i = j; i <= n; i += j) {
                a[i] = false;
            }
        }
    }
    return a[n];
}


