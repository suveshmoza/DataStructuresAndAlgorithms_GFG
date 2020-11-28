#include <iostream>
using namespace std;

int findDuplicate(int arr[])
{
    if (arr[3] == arr[4])
        return arr[3];
    else if (arr[4] == arr[5])
        return arr[4];
    else
        return arr[5];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[10];
        for (int i = 0; i < 10; i++)
            cin >> arr[i];
        cout << findDuplicate(arr) << endl;
    }
    return 0;
}