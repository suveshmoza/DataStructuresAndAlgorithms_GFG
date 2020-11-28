#include <iostream>
using namespace std;

int sisterChocolate(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (low == high)
        {
            return arr[low];
        }
        if (arr[low] < arr[high])
        {
            high--;
        }
        else
            low++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << sisterChocolate(arr, n) << endl;
    }
    return 0;
}