// Queue implement using array 
#include<bits/stdc++.h>
using namespace std;
#define n 5
int q[n]={0};
int front=-1,rear=-1,x=n-1;
void Enqueue()
{
  if(rear==x)
      cout<<"Queue is full"<<endl;
  else
  {
      int val;
      cout<<"Enter a number to be insert= ";cin>>val;
      rear=rear+1;
      q[rear]=val;
  }
}
void Dequeue()
{
    if(rear==front)
      cout<<"Queue is Empty"<<endl;
    else{
        front=front+1;
        cout<<"Deleted Element is="<<q[front]<<endl;
        x++;
    }  
}
void Display()
{
    if(rear==front)
      cout<<"Queue is Empty"<<endl;
    else{
        cout<<"Queue is\n";
        for(int i=front+1;i<=rear;i++)
          cout<<q[i]<<"\t";
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

