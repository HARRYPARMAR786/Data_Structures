#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
}*front=NULL,*rear=NULL,*temp,*q;
void create()
{
    int num;
    temp=( Node*)malloc(sizeof( Node));
    printf("Enter data=");
    scanf("%d",&num);
    temp->data=num;
}
void ins_beg()
{
create();
if(rear==NULL)
  front=rear=temp;
else
{
  rear->next=temp;
  rear=temp;
}
rear->next=front;
  }

/*void ins_pos()
{
    
    int i,pos;
     if(head==NULL)
       printf("list is empty");
   else{
    create();
    printf("Enter position=");
    scanf("%d",&pos);
    q=head;
     for(i=1;i<pos-1;i++){
          q=q->next;
       temp->next=q->next;
       q->next=temp; 
   }
 }*/
     

    
 
 void display()
{
    if(front==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
      q=front;
      while(q!=rear)
      {
        cout<<q->data<<"->";
        q=q->next;
      }
      cout<<"\n";
    }
}
int main()
{
    while(1){
      cout<<"1.Insert at beg"<<endl;
       cout<<"2.insert at pos"<<endl;
       cout<<"3.Insertion at given key"<<endl;
      cout<<"4.deletion at pos"<<endl;
    cout<<"5.deletion at given key"<<endl;
        cout<<"6.display"<<endl;

    int ch;
    cout<<"Enter your choice=";
    cin>>ch;
  switch(ch)
  {
      case 1:ins_beg();
                  break;
      // case 2:ins_pos();
        //       break;
      /*  case 3:del_pos();
               break;                  
        case 4:del_key();
             break;*/
         case 6:display();
             break;
         
  }
    }   
  return 0;
}