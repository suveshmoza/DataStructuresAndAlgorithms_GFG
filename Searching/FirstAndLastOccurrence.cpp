using namespace std;
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int left = leftIndex(arr, 0, n - 1, x);
        int right = rightIndex(arr, 0, n - 1, x);
        if (left == -1 && right == -1)
            cout << "-1" << endl;
        else
            cout << left << " " << right << endl;
    }
    return 0;
}