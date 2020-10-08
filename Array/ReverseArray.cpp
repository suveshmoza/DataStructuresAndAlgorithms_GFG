#include <iostream>

using namespace std;

void reverseArr(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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
        {
            cin >> arr[i];
        }
        reverseArr(arr, n);
        print(arr, n);
        cout << endl;
    }
}