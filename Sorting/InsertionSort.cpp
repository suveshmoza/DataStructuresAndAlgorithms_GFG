void insert(int a[], int i)
{
    int temp = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > temp)
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = temp;
}