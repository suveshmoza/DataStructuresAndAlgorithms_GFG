class Solution
{
public:
    int maxProduct(int arr[], int n)
    {
        int max = INT_MIN;
        int maxIndex;
        for (int i = 0; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                maxIndex = i;
            }
        }
        int secondMax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (secondMax < arr[i] && maxIndex != i)
            {
                secondMax = arr[i];
            }
        }
        return (max * secondMax);
    }
};