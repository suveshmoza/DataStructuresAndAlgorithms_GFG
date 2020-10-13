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
        int a = (n * (n + 1)) / 2;
        if (a == m)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}