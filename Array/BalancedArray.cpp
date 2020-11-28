class Solution
{
public:
    int minValueToBalance(int arr[], int n)
    {
        int lsum = 0, rsum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
                lsum += arr[i];
            else
                rsum += arr[i];
        }
        return abs(lsum - rsum);
    }
};