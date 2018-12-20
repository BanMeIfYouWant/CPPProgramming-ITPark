void exchange(int *a, int *b);

/*

Данная функция принимает последний элемент массива за опорный,
затем помещает его в корректную позицию в отсортированном массиве и
располагает элементы меньше (опорного) слева, а ,элементы больше
(опорного) справа

*/

int separation(int array[], int first, int last, int typesort) {
    int pivot = array[last];
    int i = (first - 1);//индекс наименьшего (наибольшего) элемента
    for (int j = first; j <= last - 1; j++) {
        /* если текущий элемент
        1. меньше либо равен опорному;
        2. больше либо равен опорному
        */
        switch(typesort) {
            case 1:
                if (array[j] <= pivot) {
                    i++;
                    exchange(&array[i], &array[j]);
                }
                break;
            case 2:
                if (array[j] >= pivot) {
                    i++;
                    exchange(&array[i], &array[j]);
                }
                break;
        }
    }
    exchange(&array[i + 1], &array[last]);
    return (i + 1);
}
