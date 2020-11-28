bool check(vector<ll> arr, vector<ll> brr, int n)
{
    unordered_set<ll> set;
    for (int i = 0; i < n; i++)
        set.insert(arr[i]);
    for (int i = 0; i < n; i++)
        set.erase(brr[i]);
    if (set.size() == 0)
        return true;
    else
        return false;
}