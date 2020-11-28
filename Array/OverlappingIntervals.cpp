#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int s, e;
};

bool mycompare(Interval a, Interval b)
{
    return a.s < b.s;
}

void mergeIntervals(Interval arr[], int n)
{
    sort(arr, arr + n, mycompare);

    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[index].e >= arr[i].s)
        {
            arr[index].s = min(arr[index].s, arr[i].s);
            arr[index].e = max(arr[index].e, arr[i].e);
        }
        else
        {
            index++;
            arr[index] = arr[i];
        }
    }
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i].s << " " << arr[i].e << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n;
        struct Interval arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            arr[i].s = x;
            arr[i].e = y;
        }
        mergeIntervals(arr, n);
    }
    return 0;
}