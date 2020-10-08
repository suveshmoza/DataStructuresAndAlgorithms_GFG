#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int index = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {

                index = i + 1;
                break;
            }
        }
        cout << index << endl;
    }
    return 0;
}