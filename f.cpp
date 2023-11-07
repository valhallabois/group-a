#include <iostream>
using namespace std;

void ittr(int n)                         //itterative call
{
int prev=0;
int curr=1;
int next;
for(int i=0;i<n;i++)                    //add till next=n
{
cout<<prev;
next=prev+curr;
prev=curr;
curr=next;
}
cout<<endl;
}

void rec(int n,int a=0,int b=1)        //recursive call
{

if(n>0)
{
cout<<a;
rec(n-1,b,a+b);                       //call till n>0

}


}

int main()
{
int no,ch;
cin>>no;
cout<<"enter choise";
cin>>ch;
if(ch==1)
{

ittr(no);
}
else if(ch==2){
rec(no);
}
return 0;

}

