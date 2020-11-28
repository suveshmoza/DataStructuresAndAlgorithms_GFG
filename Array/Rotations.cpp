int findKRotation(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        //Case 1
        if (arr[low] <= arr[high])
            return low;
        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        //Case 2
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
            return mid;
        else if (arr[mid] <= arr[high])
            high = mid - 1;
        else if (arr[mid] >= arr[low])
            low = mid + 1;
    }
    return 0;
}