int separation(int array[], int first, int last, int typesort);

void quickSort(int array[], int first, int last, int typesort) {
    if (first < last) {
        int pivot = separation(array, first, last, typesort);
        //сортировка элементов до и после опорного элемента
        quickSort(array, first, pivot - 1, typesort);
        quickSort(array, pivot + 1, last, typesort);
    }
}
