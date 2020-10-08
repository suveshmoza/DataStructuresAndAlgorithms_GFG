int select(int arr[], int i)
{
    int max = i;
    for (int j = i - 1; j >= 0; j--)
    {
        if (arr[j] > arr[max])
        {
            max = j;
        }
    }
    return max;
}

void selectionSort(int arr[], int n)
{
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
    }
}