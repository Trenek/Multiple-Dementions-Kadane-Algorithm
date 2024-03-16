#include "subroutines.h"

void Remove(int* array1, int* array2, int* size, int dimention) {
    if (dimention == 1) {
        int i = 0;

        while (i < size[0]) {
            array1[i] -= array2[i];
            i++;
        }
    }
    else {
        int i = 0;
        int sum = SumDimentions(size, dimention - 1);

        while (i < size[dimention - 1]) {
            Remove(array1 + (i * sum), array2 + (i * sum), size, dimention - 1);
            i++;
        }
    }
}