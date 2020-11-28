class Solution
{

public:
    int minNum(long long int arr[], int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if (sum % 2 == 0)
        {
            return 2;
        }
        return 1;
    }
};