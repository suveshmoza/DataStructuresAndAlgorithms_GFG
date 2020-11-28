void MyStack ::push(int x)
{
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

int MyStack ::pop()
{
    StackNode *temp;
    if (top == NULL)
        return -1;
    temp = top;
    top = top->next;
    int popped = temp->data;
    return popped;
}