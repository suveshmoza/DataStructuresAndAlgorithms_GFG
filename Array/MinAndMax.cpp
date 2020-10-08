#include <iostream>

using namespace std;

void minMax(int arr[], int size)
{
    int min, max;
    min = max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minMax(arr, n);
    }
}