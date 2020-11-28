int findMax(Height arr[], int n)
{
    int maxHeight = 0;
    for (int i = 0; i < n; i++)
    {
        int feetInInches = arr[i].feet * 12;
        int currentHeight = feetInInches + arr[i].inches;
        if (maxHeight < currentHeight)
        {
            maxHeight = currentHeight;
        }
    }
    return maxHeight;
}