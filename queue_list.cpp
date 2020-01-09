// Queue implement  using link list
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

}*front=NULL,*rear=NULL,*temp,*q;
void create(){
    temp=new Node();
 int val;
      cout<<"Enter a number to be insert= ";cin>>val;
    temp->data=val;
}
void Enqueue()
{
    create();
  if(front==NULL){
      temp->next=NULL;
      rear=temp;
      front=rear;
  }
    
  else
  {
     rear->next=temp;
     rear=temp;
  }
}
void Dequeue()
{
    if(front==NULL)
      cout<<"Queue is Empty"<<endl;
    else{
        q=front;
        front=front->next;

    cout<<"Deleted Node is="<<q->data<<endl;
    free(q);
    
    }  
}
void Display()
{
    if(front==NULL)
      cout<<"Queue is Empty"<<endl;
    else{
             cout<<"Queue is\n";
               q=front;
       while(q!=NULL){
           cout<<q->data<<"\t";
           q=q->next;

       }
         
    }
    cout<<"\n";
}
  int main()
{
   while(1){
    cout<<"1.Insert an element in queue "<<endl;
         cout<<"2.Delete an element "<<endl;
        cout<<"3.Display"<<endl;
     int ch;cout<<"Enter your choice=";
     cin>>ch; 
  switch(ch)
  {
      case 1:Enqueue();
                 break;
      case 2:Dequeue();
               break;
      case 3:Display();
           break;                                   
  }
   } 
  return 0;
  
}

