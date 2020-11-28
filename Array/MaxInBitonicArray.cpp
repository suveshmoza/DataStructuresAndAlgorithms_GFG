class Solution
{
public:
    int findMaximum(int arr[], int n)
    {
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            {
                return arr[mid];
            }
            if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
};