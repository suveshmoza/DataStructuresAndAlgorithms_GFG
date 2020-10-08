int partition(int a[], int low, int high)
{
    int p = a[low];
    int start = low, end = high;
    while (start < end)
    {
        while (a[start] <= p)
        {
            start++;
        }
        while (a[end] > p)
        {
            end--;
        }
        if (start < end)
        {
            swap(a[start], a[end]);
        }
    }
    swap(a[low], a[end]);
    return end;
}