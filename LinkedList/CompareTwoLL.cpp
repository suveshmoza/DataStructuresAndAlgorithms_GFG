int compare(Node *list1, Node *list2)
{
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->c > list2->c)
        {
            return 1;
        }
        if (list1->c < list2->c)
        {
            return -1;
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    if (list1 != NULL)
    {
        return 1;
    }
    if (list2 != NULL)
    {
        return -1;
    }
    return 0;
}