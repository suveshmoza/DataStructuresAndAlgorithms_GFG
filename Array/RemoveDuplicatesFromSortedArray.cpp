int remove_duplicate(int arr[], int N)
{
    if (N == 0 || N == 1)
    {
        return N;
    }
    int j = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[N - 1];

    return j;
}