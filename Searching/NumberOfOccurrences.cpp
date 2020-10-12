class Solution
{
public:
    /* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
    int leftIndex(int arr[], int low, int high, int x)
    {
        int result = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (x == arr[mid])
            {
                result = mid;
                high = mid - 1;
            }
            else if (x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return result;
    }

    int rightIndex(int arr[], int low, int high, int x)
    {
        int result = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (x == arr[mid])
            {
                result = mid;
                low = mid + 1;
            }
            else if (x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return result;
    }

    int count(int arr[], int n, int x)
    {
        int left = leftIndex(arr, 0, n - 1, x);
        int right = rightIndex(arr, 0, n - 1, x);
        if (left == -1 && right == -1)
        {
            return 0;
        }
        int result = right - left + 1;
        return result;
    }
};