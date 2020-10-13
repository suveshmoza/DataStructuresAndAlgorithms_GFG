/* The method push to push element
   into the stack */
void MyStack ::push(int x)
{
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

/* The method pop which return the element
  poped out of the stack*/
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