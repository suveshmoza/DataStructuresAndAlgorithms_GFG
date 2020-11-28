void bitonicGenerator(int arr[], int n)
{
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    int i = 0;
    for (int j = 0; j < even.size(); j++)
    {
        arr[i++] = even[j];
    }
    for (int j = 0; j < odd.size(); j++)
    {
        arr[i++] = odd[j];
    }
}