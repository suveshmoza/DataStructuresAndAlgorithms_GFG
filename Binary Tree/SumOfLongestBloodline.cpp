void sumOfLongRootToLeafPathUtil(Node *root, int sum, int &maxS, int len, int &maxL)
{
    if (!root)
    {
        if (maxL < len)
        {
            maxL = len;
            maxS = sum;
        }
        else if (maxL == len && maxS < sum)
            maxS = sum;
        return;
    }
    sumOfLongRootToLeafPathUtil(root->left, sum + root->data, maxS, len + 1, maxL);
    sumOfLongRootToLeafPathUtil(root->right, sum + root->data, maxS, len + 1, maxL);
}

int sumOfLongRootToLeafPath(Node *root)
{
    if (!root)
        return 0;
    int maxS = 0, maxL = 0;
    sumOfLongRootToLeafPathUtil(root, 0, maxS, 0, maxL);
    return maxS;
}