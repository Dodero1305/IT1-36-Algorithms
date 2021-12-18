#include <bits/stdc++.h>

void print_array(int* a, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
}

void swap_elements(int* array, int first_index, int second_index) {
    int temp = array[first_index];
    array[first_index] = array[second_index];
    array[second_index] = temp;
}

