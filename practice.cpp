#include<iostream>
using namespace std;
int main ()
{
   int i , j ;
   for(i = 5 ; i >0 ; i--)  // i=5
   {
    for(j = 1 ; j <5; j++)  // j=1
    {
      if(j>=i)
      cout<<"*";
      cout<<" ";
    }
     cout<<"\n";
   }
  return 0;
} 