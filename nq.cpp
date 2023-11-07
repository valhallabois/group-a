#include <iostream>
using namespace std;

bool is_Safe(int** arr,int x,int y,int n)            //arr= array, x=row, y=col, n=no of queens
{

for(int row=0;row<x;row++)                          //for checking same row and col
{
if(arr[row][y]==1)
{
return false;
}
}


int row=x;
int col=y;
while(row>=0 && col>=0){                          //for checking left diagoonal
if(arr[row][col]==1)
{
return false;
}
row--;
col--;
}


row=x;
col=y;
while(row>=0 && col<n){                         //for checking right diagonal
if(arr[row][col]==1)
{
return false;
}
row--;
col++;
}
return true;
}


bool nQueen(int** arr, int x, int n)             //actual function no need of col as we are only checking row wise and col is checked in the is safe funcction
{
if(x>=n){                                        // if all queens placed return true
return true;
}
for(int col=0;col<n;col++)                      //start by checking [1][1]

{
if(is_Safe(arr,x,col,n))                       //if is safe returns true, for xth row place 1
{
arr[x][col]=1;
if(nQueen(arr,x+1,n))                         //check for x+1th row
{
return true;
}
arr[x][col]=0;                               // if not possible put last checked row to 0
}

}
return false;

}


int main(){
int n;
cin>>n;
int** arr=new int*[n];                     //allocate new mwmory for array
for (int i=0;i<n;i++){                     
arr[i]=new int[n];                            
for (int j=0;j<n;j++){
arr[i][j]=0;
}
}
if(nQueen(arr,0,n)){                     //call the function
for (int i=0;i<n;i++){                   //call the array
 
for (int j=0;j<n;j++){
cout<<arr[i][j]<<" ";                   
}cout<<endl;
}

return 0;
}
}

