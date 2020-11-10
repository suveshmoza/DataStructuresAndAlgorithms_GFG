et *constructTree(char postfix[])
{
    stack<et *> s;
    for (int i = 0; i < strlen(postfix); i++)
    {
        et *temp = new et(postfix[i]);
        if (isOperator(postfix[i]))
        {
            temp->right = s.top();
            s.pop();
            temp->left = s.top();
            s.pop();
        }
        s.push(temp);
    }
    return s.top();
}
