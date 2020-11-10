#include <iostream>
#include <vector>
using namespace std;

void toBST(vector<int> &arr, int low, int high)
{
    if (low > high)
        return;

    int mid = (low + high) / 2;
    cout << arr[mid] << " ";
    toBST(arr, low, mid - 1);
    toBST(arr, mid + 1, high);
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        toBST(arr, 0, n - 1);
        cout << endl;
    }
    return 0;
}