class Solution
{
public:
    vector<int> kLargest(int arr[], int n, int k)
    {
        sort(arr, arr + n, greater<int>());
        vector<int> res;
        for (int i = 0; i < k; i++)
            res.push_back(arr[i]);
        return res;
    }
};