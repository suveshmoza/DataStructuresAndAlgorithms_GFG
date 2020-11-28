void deleteNode(Node *node)
{
    if (node->next == NULL)
        return;
    Node *deleteNode = node->next;
    node->data = deleteNode->data;
    node->next = deleteNode->next;
    free(deleteNode);
}