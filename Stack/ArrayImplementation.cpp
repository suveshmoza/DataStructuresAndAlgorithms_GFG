void MyStack ::push(int x)
{
    arr[++top] = x;
}

/*The method pop which return the element 
  poped out of the stack*/
int MyStack ::pop()
{
    if (top == -1)
        return -1;
    int x = arr[top--];
    return x;
}