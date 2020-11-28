class Solution
{
public:
    bool fascinating(int num)
    {
        int freq[10] = {0};
        string res = "" + to_string(num) + to_string(num * 2) + to_string(num * 3);
        for (int i = 0; i < res.length(); i++)
        {
            int digit = res[i] - '0';
            if (freq[digit] and digit != 0 > 0)
                return false;
            else
                freq[digit]++;
        }
        for (int i = 1; i < 10; i++)
        {
            if (freq[i] == 0)
                return false;
        }
        return true;
    }
};