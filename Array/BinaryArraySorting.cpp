vector<int> SortBinaryArray(vector<int> arr)
{
    int i = 0, j = arr.size() - 1;
    while (i <= j)
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
        else if (arr[i] == 0 && arr[j] == 1)
            i++, j--;
        else if (arr[i] == 0 && arr[j] == 0)
            i++;
        else
            j--;
    }
    return arr;
}