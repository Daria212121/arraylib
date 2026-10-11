#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Условная стоимость фигур на доске:
    // ферзь=9, ладья=5, слон/конь=3, пешка=1
    int pieces[] = { 9, 5, 3, 3, 1, 1, 1, 1, 1, 1, 5, 3 };
    const std::size_t n = sizeof(pieces) / sizeof(pieces[0]);

    std::cout << "=== Стоимость шахматных фигур ===\n\n";

    // Суммарная стоимость
    int total = arr_sum(pieces, n);
    std::cout << "Суммарная стоимость фигур: " << total << "\n";

    // Максимальная стоимость
    int max_cost = arr_max(pieces, n);
    std::cout << "Максимальная стоимость фигуры: " << max_cost << "\n";

    // Минимальная стоимость
    int min_cost = arr_min(pieces, n);
    std::cout << "Минимальная стоимость фигуры: " << min_cost << "\n";

    // Подсчёт пешек (стоимость == 1)
    int pawn_count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (pieces[i] == 1) {
            ++pawn_count;
        }
    }
    std::cout << "Количество пешек: " << pawn_count << "\n";

    // Средняя стоимость фигуры
    double avg = arr_average(pieces, n);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Средняя стоимость фигуры: " << avg << "\n";

    return 0;
}
