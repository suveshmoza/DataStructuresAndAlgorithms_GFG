class Solution
{
public:
    string reverseEqn(string s)
    {
        string result;
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '+' || s[i] == '-' ||
                s[i] == '/' || s[i] == '*')
            {
                result.insert(result.begin(),
                              s.begin() + j, s.begin() + i);
                j = i + 1;
                result.insert(result.begin(), s[i]);
            }
        }

        result.insert(result.begin(), s.begin() + j,
                      s.end());
        return result;
    }
};