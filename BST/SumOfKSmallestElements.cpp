#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

struct Node *createNode(int data)
{
    Node *new_Node = new Node;
    new_Node->left = NULL;
    new_Node->right = NULL;
    new_Node->data = data;
    return new_Node;
}
struct Node *insert(Node *root, int key)
{
    if (root == NULL)
        return createNode(key);
    if (root->data > key)
        root->left = insert(root->left, key);
    else if (root->data < key)
        root->right = insert(root->right, key);
    return root;
}

int SumOfKSmallestRec(Node *root, int k, int &count)
{
    if (root == NULL)
        return 0;
    if (count > k)
        return 0;
    int res = SumOfKSmallestRec(root->left, k, count);
    if (count >= k)
        return res;
    res += root->data;
    count++;
    if (count >= k)
        return res;
    return res + SumOfKSmallestRec(root->right, k, count);
}

int SumOfKSmallest(Node *root, int k)
{
    int count = 0;
    SumOfKSmallestRec(root, k, count);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *root = NULL;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            root = insert(root, arr[i]);
        }
        int k;
        cin >> k;
        cout << SumOfKSmallest(root, k) << endl;
    }
    return 0;
}