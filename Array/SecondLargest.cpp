class Solution
{
public:
    int print2largest(int arr[], int n)
    {
        int second;
        int largest = second = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            largest = max(largest, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != largest)
                second = max(second, arr[i]);
        }
        if (second == INT_MIN)
            return -1;
        return second;
    }
};