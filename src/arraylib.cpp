#include <iostream>
#include <cstddef>
#include <algorithm>
#include <vector>

int arr_sum(const int* arr, std::size_t n){
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) {
        s += arr[i];
    }
    return s;
}

int arr_max(const int* a, std::size_t n) {
    int m = a[0];
    for (std::size_t i = 1; i < n; ++i) {
        if (a[i] > m) { m = a[i]; }
    }
    return m;
}

int arr_min(const int* a, std::size_t n) {
    int m = a[0];
    for (std::size_t i = 1; i < n; ++i) {
        if (a[i] < m) { m = a[i]; }
    }
    return m;
}

double arr_average(const int* a, std::size_t n) {
    double s = arr_sum(a, n);
    double average = s / n;
    return average;
}

int arr_count_positive(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > 0) ++count;
    }
    return count;
}

int arr_count_negative(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] < 0) ++count;
    }
    return count;
}

int arr_count_zero(const int* arr, std::size_t n) {
    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] == 0) ++count;
    }
    return count;
}

int arr_product(const int* arr, std::size_t n) {
    int p = 1;
    for (std::size_t i = 0; i < n; ++i) {
        p *= arr[i];
    }
    return p;
}

double arr_median(const int* arr, std::size_t n) {
    std::vector<int> sorted(arr, arr + n);
    std::sort(sorted.begin(), sorted.end());
    double result = 0.0;
    if (n % 2 == 1) {
        result = sorted[n / 2];
    } else {
        result = (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
    }
    return result;
}