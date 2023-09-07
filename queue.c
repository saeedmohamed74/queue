struct node
{
    int info;
    struct node *next;
};
struct node *start= NULL;
void create()
{
    struct node *temp, *ptr;
    temp=(struct node *) malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("there is no enough space");
        return;
    }
    printf("enter the data:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }

    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display()
{
    struct node *ptr;
    ptr=start;
    if (start==NULL)
    {
        printf("there is no stack\n");
    }
    while(ptr!=NULL)
    {
        printf("%d ,",ptr->info);
        ptr=ptr->next;
    }

}
void insert_begin()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("there is no enough space\n");
    }
    printf("enter the value: ");
    scanf("%d",&temp->info);
    temp->next=NULL;
      if (start==NULL)
    {
        printf("there is no linked list i will make one");
        start=temp;
    }
    else
        {
    temp->next=start;
    start=temp;
        }
}
void delete_begin()
{
    struct node *ptr;
    if (start==NULL)
    {
        printf("the list is empity");
        exit(0);
    }
    else
    {
         ptr=start;
         start=start->next;
         printf("the deleted element is :%d\n",ptr->info);
         free(ptr);
    }
}
