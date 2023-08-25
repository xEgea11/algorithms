static int  array_len(int array[])
{
    int size;

    size = 0;
    while (array[size] != MAX_INT)
        size++;
    return (size);
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