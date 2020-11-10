Node *buildTree(int inorder[], int levelOrder[], int iStart, int iEnd, int n)
{
    if (n <= 0)
        return NULL;

    Node *root = new Node(levelOrder[0]);

    int index = -1;
    for (int i = iStart; i <= iEnd; i++)
    {
        if (levelOrder[0] == inorder[i])
        {
            index = i;
            break;
        }
    }

    unordered_set<int> s;
    for (int i = iStart; i < index; i++)
    {
        s.insert(inorder[i]);
    }

    int lLevel[s.size()];                 // Left
    int rLevel[iEnd - iStart - s.size()]; // Right
    int li = 0, ri = 0;
    for (int i = 1; i < n; i++)
    {
        if (s.find(levelOrder[i]) != s.end())
            lLevel[li++] = levelOrder[i];
        else
            rLevel[ri++] = levelOrder[i];
    }
    root->left = buildTree(inorder, lLevel,
                           iStart, index - 1, index - iStart);
    root->right = buildTree(inorder, rLevel,
                            index + 1, iEnd, iEnd - index);
    return root;
}