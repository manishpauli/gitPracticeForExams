#include<iostream>
#define n 2
using namespace std;

// main begin
int main ()
{
  
  int i,j;
  int ***ptr= new int**[n];   // declaration of 3d pointer.
  for(i=0;i<n;i++)
  {
    ptr[i]=new int *[n];
  }
  for (i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      ptr[i][j] = new int [n];
    }
  }// end of declaration


  for(i=0;i<n;i++)
  {    
    for(j=0;j<n;j++)
    {
      for(int k=0;k<n;k++)
      {
        ptr[i][j][k] = i+j+k;
        cout<<" "<<ptr[i][j][k];
      }
      cout<<"  ";
    }
    cout<<" ";
  }


  
  return 0;
}

