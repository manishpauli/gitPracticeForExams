#include<iostream>
#define n 3
using namespace std;
int i,j;
int populate_2D_array (int**);
int populate_2D_array2 (int**);
int display_2D_array (int**);
int add_2D_array (int** , int**);
void multiply_2D_array (int** , int**);
void reverse_row_2D_array (int**);
// main begin
int main ()
{
  

  int i ,ch, j;
  do{

    cout<<"\n Assignment #8 :"
"\n 1. Program to input and display a matrix."
"\n 2. Program to add of two matrices."
"\n 3. Program to multiply two matrices."
"\n 4. Program to print each row of a matrix in reverse order."
"\n 99. For exit.";
cin>>ch;

    int **ptr = new int *[n];    // declareing pointer array
    for(i=0; i<n; i++)
    {
     
        ptr[i] = new int[n];           // declare integer array
    }

 int **ptr2 = new int *[n];    // declareing pointer array
    for(i=0; i<n; i++)
    {
     
        ptr2[i] = new int[n];           // declare integer array
    }

switch (ch)
{
case 1 :   populate_2D_array(ptr);
           display_2D_array(ptr);
           break;

case 2 :   populate_2D_array(ptr);
           populate_2D_array2(ptr2);
           add_2D_array (ptr,ptr2);
           break; 
case 3 :   populate_2D_array(ptr);
           populate_2D_array2(ptr2);
           multiply_2D_array(ptr,ptr2);
           break; 

case 4 :   populate_2D_array(ptr);
           populate_2D_array2(ptr2);
           display_2D_array(ptr);
           reverse_row_2D_array (ptr);
           display_2D_array(ptr2);
           reverse_row_2D_array (ptr2);
           break;

default:
  break;
}

  }while(ch!=99);

  return 0;
}

int populate_2D_array(int **ptr)
{
  int i,j;
for(i=0; i<n; i++)
    {
      for (j=0 ; j < n; j++)
      {
        ptr[i][j] = i+j+1;           // populating integer array
      }
    }
return 0;
}

int populate_2D_array2(int **ptr)
{
  int i,j;
for(i=0; i<n; i++)
    {
      for (j=0 ; j < n; j++)
      {
        ptr[i][j] = i+j+5;           // populating integer array
      }
    }
return 0;
}

int display_2D_array(int **ptr)
{
  int i,j;
   for(i=0; i<n; i++)
    {
      for (j=0 ; j < n; j++)
      {
        cout<<" "<<ptr[i][j];           // populating integer array
      }
      cout<<"\n";
    }
    cout<<"\n";
return 0; 
}

int add_2D_array (int **ptr, int **ptr2)
{

   int **sum = new int *[n];    // declareing pointer array to store sum 
    for(i=0; i<n; i++)
    {
     
        sum[i] = new int[n];           // declare integer array
    }

   
        display_2D_array (ptr);
        cout<<"\n";
        display_2D_array (ptr2);


  for (i=0;i<n;i++)
  {
    for(j=0;j<n; j++)
    {
      sum[i][j] = ptr[i][j] + ptr2[i][j];
    }
  }
   cout<<"\n";
  display_2D_array (sum);
return 0;
}

void multiply_2D_array (int **ptr , int **ptr2)
{

  int **mul = new int *[n];    // declareing pointer array to store sum 
    for(i=0; i<n; i++)
    {
     
        mul[i] = new int[n];           // declare integer array
    }
  
      for(i=0; i<n; i++)
    {
      for (j=0 ; j < n; j++)
      {
        mul[i][j] = 0;                 // populating integer array
      }
    }

        display_2D_array (ptr);
        cout<<"\n";
        display_2D_array (ptr2);

   for (i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
    for (int k=0;k<n;k++)
    {
        mul[i][j] += ptr[i][k] * ptr2[k][j];  // this logic is ver important 
     
    }
    }
   }
   cout<<"\n";
   display_2D_array (mul);

}

void reverse_row_2D_array (int **ptr)
{
  for(i=0; i<n; i++)
    {
      for (j=n-1 ; j>=0; j--)
      {
        cout<<" "<<ptr[i][j];           // populating integer array
      }
      cout<<"\n";
    }
    cout<<"\n";
}
