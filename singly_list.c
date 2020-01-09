struct node
{
    int data;
    struct node *next;
}*head,*q,*temp;
 
*head=NULL;

int main()
{
    int ch;
    void create();
    void insert_beg();
    void insert_end();
void insert_pos();
    void display();
    /*void delete_beg();
    void delete_end();
    int delete_pos();*/
 
    while(1)
    {
        printf("\n\n---- Singly Linked List(SLL) Menu ----");
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);
 
        switch(ch)
        {
            case 1:
                    printf("\n---- Insert Menu ----");
                    printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: insert_beg();
                                break;
                        case 2: insert_end();
                                break;
                        case 3: insert_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
 
            case 2: display();
                    break;
 
            /*case 3: printf("\n---- Delete Menu ----");
                    printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: delete_beg();
                                break;
                        case 2: delete_end();
                                break;
                        case 3: delete_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
            case 4: exit(0);
                    default: printf("Wrong Choice!!");
        }*/
    }
    return 0;
}
void create()
{
    int num;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data=");
    scanf("%d",&num);
    temp->data=num;
}

void insert_beg()
{
    create();
if(head==NULL)
 {
    temp->next=NULL;
    head=temp;
 }
 else
 {
     temp->next=head;
     head=temp;
 }
 }
 void insert_end()
 {
     create();
     if(head==NULL)
 {
    temp->next=NULL;
    head=temp;
 }
 else
 {
     temp->next=NULL;
     q=head;
     while(q->next!=NULL)
       q=q->next;
     q->next=temp;
               }
 }
 void insert_pos()
 {
     int i,pos;
     if(head==NULL)
       printf("list is empty");

    create();
    printf("Enter position=");
    scanf("%d",&pos);
    q=head;
     for(i=1;i<pos-1;i++){
        if(q->next==NULL)
           printf("there are less element");
        q=q->next;}
       temp->next=q->next;
       q->next=temp; }
       
 }
 void display()
{
    if(head==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=head;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}