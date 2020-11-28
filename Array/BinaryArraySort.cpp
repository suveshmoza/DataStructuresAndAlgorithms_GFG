void binSort(int A[], int N)
{
    //Your code here

    int i = 0, j = N - 1;
    while (i < j)
    {
        while (A[i] == 0 && i < j)
            i++;
        while (A[j] == 1 && i < j)
            j--;
        if (i < j)
        {
            A[i] = 0;
            A[j] = 1;
            i++, j--;
        }
    }
