// lab13_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int getSeriesElement(int n) {
    if (n == 1) {
        return 2;
    }
    else {
        return 2 + getSeriesElement(n - 1);
    }
}

int main() {
    setlocale(LC_CTYPE, "ukr");

    int n;

    std::cout << "Введіть номер елементу ряду (n): ";
    std::cin >> n;

    if (n < 1 || n > 10) {
        std::cerr << "Помилка: n повинно бути в діапазоні від 1 до 10" << std::endl;
        return 1;
    }

    int result = getSeriesElement(n);
    std::cout << "n-й член ряду: " << result << std::endl;

    return 0;
}