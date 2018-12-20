#include <iostream>
#include "sort.hpp"

int main() {
    int array[] = {100, -3, 8, 29, -1141, 0, 666, 17, 2, -67, 95, 1, -87, 237, -3, 933};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << "Unsorted array:" << std::endl;
    printArray(array, size);
	std::cout << "Please, select type of sorting:" << std::endl;
	std::cout << "1. Ascending" << std::endl;
	std::cout << "2. Descending" << std::endl;
    int typesort;
	std::cin >> typesort;
    if (typesort == 1 || typesort == 2) {
        quickSort(array, 0, size - 1, typesort);
        std::cout << "Sorted array:" << std::endl;
        printArray(array, size);
    } else std::cout << "Error! Goodbye! :-)" << std::endl;
    
}
