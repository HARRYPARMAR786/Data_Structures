//priority queue implement using array
// element delete with given priority
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
void Enqueue()
{
    
if(v.empty())
{
     int val,pr;
      cout<<"Enter a number to be insert= ";cin>>val;
      cout<<"Enter priority=";cin>>pr;
      v.push_back(make_pair(pr,val));
}
else{
     int val,pr;
      cout<<"Enter a number to be insert= ";cin>>val;
      cout<<"Enter priority=";cin>>pr;
      auto it=v.begin();
      while(pr<it->first){
          it++;}
      v.insert(it++,make_pair(pr,val));

}
}

void Dequeue()
{
    if(v.empty())
      cout<<"Container is Empty"<<endl;
    else{
        int p;
        cout<<"Enter priority to be delete=";cin>>p;
        auto i=v.begin();
        while(i->first!=p){
            i++;
        }

      cout<<"Deleted Element is="<<i->second<<endl;
      v.erase(i);
    }  
}
void Display()
{
  //  if(rear==front)
    //  cout<<"Queue is Empty"<<endl;
     if(v.empty())
      cout<<"Container is Empty"<<endl;
        cout<<"Queue is\n";
     for(auto it=v.begin();it!=v.end();it++)
        cout<<it->first<<"\t"<<it->second<<"\n";

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

