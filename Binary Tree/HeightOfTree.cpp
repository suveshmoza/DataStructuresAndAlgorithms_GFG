class Solution
{
public:
    int height(struct Node *node)
    {
        // code here
        return node == NULL ? 0 : max(height(node->left), height(node->right)) + 1;
    }
};