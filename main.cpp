#include "arraylib.h"
#include <iostream>
#include <cstddef>
#include <algorithm>
#include <vector>

int main() {
    int data[] = {5, 6, 7, 8, 9, 0};
    const std::size_t n = sizeof(data) / sizeof(data[0]);
    std::cout << "Массив: ";
    for (std::size_t i = 0; i < n; ++i)
        std::cout << data[i] << " ";
    std::cout << "\n\n";

    std::cout << "Сумма:              " << arr_sum(data, n) << "\n";
    std::cout << "Максимум:           " << arr_max(data, n) << "\n";
    std::cout << "Минимум:            " << arr_min(data, n) << "\n";
    std::cout << "Среднее:            " << arr_average(data, n) << "\n";
    std::cout << "Кол-во > 0:         " << arr_count_positive(data, n) << "\n";
    std::cout << "Кол-во < 0:         " << arr_count_negative(data, n) << "\n";
    std::cout << "Кол-во == 0:        " << arr_count_zero(data, n) << "\n";
    std::cout << "Произведение:       " << arr_product(data, n) << "\n";
    std::cout << "Медиана:            " << arr_median(data, n) << "\n";

    return 0;
    return 0;

}