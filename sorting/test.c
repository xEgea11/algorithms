#include <stdio.h>

#define MAX_INT 2147483647

static int  array_len(int array[])
{
    int size;

    size = 0;
    while (array[size] != MAX_INT)
        size++;
    return (size);
}

static void print_array(int array[])
{
    int i;

    i = 0;
    while (array[i] != MAX_INT)
        printf("%i  ", array[i++]);
    printf("\n\n");
}

void    insertion_sort(int array[], int (*size)(int []))
{
    for (int j = 1; j < size(array); j++)
    {
        int key = array[j];
        int i = j - 1;
        while (i >= 0 && array[i] > key)
        {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
    }
}

int main(void)
{
    int my_array[] = {54, 5, 34, 9, 1, 39, 62, 38, 43, 82, 52, 14, 6, MAX_INT};
    printf("El tamaño del array es: %i\n", array_len(my_array));
    print_array(my_array);
    printf("El valor del array después de insertion sort: \n\n");
    insertion_sort(my_array, array_len);
    print_array(my_array);
    
}