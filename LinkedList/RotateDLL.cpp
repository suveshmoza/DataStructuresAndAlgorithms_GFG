struct node*update(struct node*start,int p)
{
    struct node *t,*s;
    s=t=start;
    while(t->next!=NULL){
    t=t->next;
    }
    for(int i=1;i<=p;i++){
    s=s->next;
    }
    s->prev->next=NULL;
    s->prev=NULL;
    t->next=start;
    start->prev=t;
return s;
}
