#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n] = {0}, max = INT_MIN;
        while (m--)
        {
            int a, b, k;
            cin >> a >> b >> k;
            for (int i = a; i <= b; i++)
            {
                arr[i] += k;
            }
            for (int i = 0; i < n; i++)
            {
                if (max < arr[i])
                {
                    max = arr[i];
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}