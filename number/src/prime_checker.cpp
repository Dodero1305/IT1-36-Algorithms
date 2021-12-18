#include <bits/stdc++.h>

bool is_prime(int n) {
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