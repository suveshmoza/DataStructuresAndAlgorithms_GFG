Node *reverseList(Node *head)
{
    Node *prev, *current, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

Node *addingOne(Node *head)
{
    // Your Code here
    Node *result = head;
    Node *temp, *prev = NULL;
    int carry = 1, sum;
    while (head != NULL)
    {
        sum = carry + head->data;
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        head->data = sum;
        temp = head;
        head = head->next;
    }
    if (carry > 0)
    {
        temp->next = new Node(carry);
    }
    // return head of list after adding one
    return reverseList(result);
}

Node *addOne(Node *head)
{
    head = reverseList(head);
    addingOne(head);
}