void bubble(int arr[], int i, int n)
{

    for (int j = 0; j < n - 1 - i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}