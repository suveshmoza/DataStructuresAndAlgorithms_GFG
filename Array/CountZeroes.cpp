class Solution
{
public:
    int BinarySearch(int arr[], int low, int high)
    {
        if (high >= low)
        {
            int mid = low + (high - low) / 2;
            if ((mid == 0 || arr[mid - 1] == 1) && arr[mid] == 0)
                return mid;
            if (arr[mid] == 1)
                return BinarySearch(arr, mid + 1, high);
            else
                return BinarySearch(arr, low, mid - 1);
        }
        return -1;
    }

    int countZeroes(int arr[], int n)
    {
        int ans = BinarySearch(arr, 0, n);
        if (ans == -1)
            return 0;
        return n - ans;
    }
};