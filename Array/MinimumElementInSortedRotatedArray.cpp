#include <iostream>
using namespace std;

int minimumElement(int A[], int low, int high)
{
    int mid;
    mid = (low + high) / 2;
    while (low < high)
    {
        //if minimum is in left;
        if (A[mid] < A[high])
            return minimumElement(A, 0, mid);
        //if minimum is in right;
        else
            return minimumElement(A, mid + 1, high);
    }
    return A[low];
}

int main()
{
    int T, N = 1000, A[N], x;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        x = minimumElement(A, 0, N - 1);
        cout << x;
        cout << endl;
    }

    return 0;
}