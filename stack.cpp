// stack  implement by array
#include<bits/stdc++.h>
using namespace std;
int top=-1;


void push(int stack[],int n)
{
   if(top==n-1)
    cout<<"Stack is full\n";

    else
    {
        int val;cout<<"Enter a number to be insert=";cin>>val;
         top=top+1;
        stack[top]=val;
       
    }
}
void pop(int stack[],int n)
{
    if(top==-1)
      cout<<"stack is empty\n";
    else{
        cout<<"Deleted Element is="<<stack[top]<<"\n";
        top=top-1;
    }  
}
void display(int stack[])
{

       if(top==-1)
      cout<<"stack is empty\n";

      
      else
      {
          cout<<"Stack is \n";
          for(int i=top;i>=0;i--)
            cout<<stack[i]<<"\t";
      }
      cout<<"\n";
}
int main()
{
    cout<<"Enter size of array=";
    int n,ch;cin>>n;
 int stack[n];
 while(1){
 cout<<"1.Element to  be push"<<endl;
 cout<<"2.Element to be pop"<<endl;
 cout<<"3.Display the stack"<<endl;
 cout<<"Enter your choice=";
 cin>>ch;
 switch(ch){
 case 1:push(stack,n);
                 break;
 case 2:pop(stack,n);
                break;
 case 3:display(stack);               
                break;
 }
 }
 return 0;
}