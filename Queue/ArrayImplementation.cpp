/* The method push to push element into the queue */
void MyQueue ::push(int x)
{
    arr[rear++] = x;
}

/*The method pop which return the element 
  poped out of the queue*/
int MyQueue ::pop()
{
    if (front == rear)
    {
        return -1;
    }
    else
    {
        int x = arr[front++];
        return x;
    }
}