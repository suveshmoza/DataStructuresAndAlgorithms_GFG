void merge(int arr[], int l, int m, int r)
{
    int b[r + 1], i = l, j = m + 1, k = 0;
    while ((i <= m) && (j <= r))
    {
        if (arr[i] <= arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
    while (j <= r)
    {
        b[k++] = arr[j++];
    }
    while (i <= m)
    {
        b[k++] = arr[i++];
    }
    for (i = l, j = 0; i <= r; i++, j++)
        arr[i] = b[j];
}