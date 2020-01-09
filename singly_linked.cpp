#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
}*head=NULL,*q,*temp;
void create()
{
    int num;
    temp=( Node*)malloc(sizeof( Node));
    printf("Enter data=");
    scanf("%d",&num);
    temp->data=num;
}

void beg()
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
 void end()
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
     while(q->next!=NULL){
       q=q->next;}
     q->next=temp;
               }
 }
 void pos()
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
         else  
        q=q->next;}
       temp->next=q->next;
       q->next=temp; 
       
 }
 void display()
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
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
        cout<<"\n";
    }
}
void del_beg()
{
    if(head==NULL)
      cout<<"deletion is not possible"<<endl;

    else{
        q=head;
        head=head->next;
        cout<<"the deleted element is="<<q->data<<endl;
        free(q);
    }  
}
void del_end()
{
    if(head==NULL)
     cout<<"list is empty"<<endl;

    else{
        q=head;
        while(q->next->next!=NULL)
           q=q->next;
    }
    temp=q->next;
    q->next=NULL;
    cout<<"Deleted element is="<<temp->data<<endl;
    free(temp);

}
void del_pos()
{
int i,pos;
if(head==NULL)
  cout<<"List is empty"<<endl;

  cout<<"Enter position to be delete=";
  cin>>pos;
  q=head;
 for(i=1;i<pos-1;i++){
   if(q->next==NULL)
     cout<<"Not sufficient element"<<endl;
   else
    q=q->next; }
    temp=q->next;
   q->next=q->next->next;

 cout<<"deleted element is="<<temp->data<<endl;
 free(temp);
}
void del_key()
{
  if(head==NULL)
    cout<<"list is empty"<<endl;
  int key;
  cout<<"Enter key=";
  cin>>key;
  q=head;
  if(q!=NULL&&q->data==key)
  {
    head=q->next;
    free(q);
    return ;
  }
  while(q!=NULL&&q->data!=key)
  {
    temp=q;
    q=q->next;
  }
  if(q==NULL){
    cout<<"key is not present in link list"<<endl;return;}
  temp->next=q->next;
  free(q);  
}
int main()
{
    while(1){
  cout<<"1.Insert at beg"<<endl;
   cout<<"2.Insert at end"<<endl;
    cout<<"3.Insert at pos"<<endl;
  cout<<"4.display"<<endl;
   cout<<"5.deletion at beg"<<endl;
   cout<<"6.deletion at end"<<endl;
    cout<<"7.deletion at pos"<<endl;
    cout<<"8.deletion at given key"<<endl;

    int ch;
    cout<<"Enter your choice=";
    cin>>ch;
  switch(ch)
  {
      case 1:beg();
                  break;
       case 2:end();
               break;
        case 3:pos();
               break;                  
        case 4:display();
             break;
         case 5:del_beg();
             break;
         case 6:del_end();
             break;
       case 7:del_pos();
             break; 
        case 8:del_key();
            break;

  }
    }   
  return 0;
}