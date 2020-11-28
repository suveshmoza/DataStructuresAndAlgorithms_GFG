class Solution
{
public:
    int totalCount(int arr[], int n, int k)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % k == 0)
                sum += arr[i] / k;
            else
                sum += arr[i] / k + 1;
        }
        return sum;
    }
};