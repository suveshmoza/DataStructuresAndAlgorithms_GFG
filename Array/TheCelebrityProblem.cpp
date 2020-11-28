class Solution
{
public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        while (s.size() >= 2)
        {
            int i = s.top();
            s.pop();
            int j = s.top();
            s.pop();

            if (M[i][j] == 1)
            {
                // i knows j -> i isn't a celebrity
                s.push(j);
            }
            else
            {
                //i doesn't know j -> j isn't a celebrity
                s.push(i);
            }
        }
        int pot = s.top();
        s.pop();

        for (int i = 0; i < n; i++)
        {
            if (i != pot)
            {
                if (M[i][pot] == 0 || M[pot][i] == 1)
                {
                    return -1;
                }
            }
        }
        return pot;
    }
};