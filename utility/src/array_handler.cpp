#include <iostream>

/**
 * In các phần tử mảng một chiều ngăn cách bởi khoảng trống
 * @param array - Mảng cần in
 * @param length - Độ dài của mảng
 */
void print_array(int* array, int length) {
    for(int i = 0; i < length - 1; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << array[length - 1];
}

/**
 * Đổi giá trị của hai phần tử trong mảng một chiều có phần tử đầu tiên tính vị trí bắt đầu từ 0
 * @param array - Mảng chứa phần tử cần hoán đổi
 * @param first_element - vị trí phần tử thứ nhất
 * @param second_element - vị trí của phần tử thứ hai
 */
void swap_elements(int* array, int first_element, int second_element) {
    int temp = array[first_element];
    array[first_element] = array[second_element];
    array[second_element] = temp;
}

