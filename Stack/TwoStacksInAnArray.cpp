/* The method push to push element into the stack 2 */
void twoStacks ::push1(int x)
{
    if (top1 < top2 - 1)
        arr[++top1] = x;
}

/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
{
    arr[--top2] = x;
}
/* The method pop to pop element from the stack 1 */
//Return the popped element
int twoStacks ::pop1()
{
    if (top1 == -1)
        return -1;
    int x = arr[top1--];
    return x;
}

/* The method pop to pop element from the stack 2 */
//Return the popped element
int twoStacks ::pop2()
{
    if (top2 == size)
        return -1;
    int x = arr[top2++];
    return x;
}