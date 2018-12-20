/*

Напишите функцию, сортирующую массив. Прототип функции: void my_sort(int * arr, int size);
Функция отдельным файлом.

*/

#include <iostream>

long long int Power(long long int numb, int exp) {
    if (numb == 1 && exp == (-1)) return 1;
    if (exp >= 0) {
        if (exp == 0)
            return 1;
        else if (exp == 1)
            return numb;
        else if (exp % 2 == 0)
            return Power(numb * numb, exp / 2);
        else
            return Power(numb * numb, exp / 2) * numb;
    }else return 0;
}

int main() {
    long long int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    std::cout << Power(a, b) << std::endl;
    return 0;
}
