#include <iostream>
using namespace std;
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
            cin >> arr[i];
        int res[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                if ((arr[i] + x) / 2 == arr[j])
                    res[i]++;
        }
        for (int i = 0; i < n; i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}