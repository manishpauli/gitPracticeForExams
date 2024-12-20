#include<iostream>
using namespace std;
#define n 5
void display(int*);
void sum_average_dynamic_array(int*);
void largest_smallest(int*);
void largest_2largest(int*);
void shift_to_left(int*);
void shift_to_right(int*);
void insert(int*);
int search(int*,int);
void display_reverse(int*);
//void delete_arr(int*);
int main ()
{
    int *ptr = new int [5];
    int i,j,ch;
    do{
      
      cout<<"\n -1. enter the array."
"\n 1. Find sum and average of array element."
"\n 2. Find largest and smallest array element."
"\n 3. Find largest and second largest array element."
"\n 4. Shifting array elements to left and right."
"\n 5. Insertion and deletion of array element from a given position"
"\n 6. Searching an element into an array"
"\n 7. Print array elements in reverse order."
"\n 0. For exit.";
       cin>>ch;
       

       for(i=0;i<n;i++)
                  {
                    ptr[i]= i+10;
                  }

       switch(ch)
       {

        
        /*case -1:   for(i=0;i<n;i++)
                  {
                    cout<<"\n Enter the number : ";
                    cin>>ptr[i];
                  }
                  break;*/
        case 1:   display(ptr);
                  sum_average_dynamic_array(ptr);
                  break;

        case 2:   display(ptr);
                  largest_smallest(ptr);
                  break; 

        case 3:   display(ptr);
                  largest_2largest(ptr);
                  break;
        case 4:   display(ptr);
                  shift_to_left(ptr);
                  shift_to_right(ptr);
                  break;
        /*case 5:   display(ptr);
                  insert(ptr);
                  //delete_arr(ptr);
                  break;*/
        case 6:   display(ptr);
                  cout<<"\n enter the number you want to check in the array : ";
                  cin>>i;
                  cout<<"\n "<<i<<" is at "<<search(ptr,i)<<" position in array ";
                  break;
        case 7:   cout<<"\n array in reverse is : ";
                  display_reverse(ptr);
                  break; 
        default : break;          

       }
    } while(ch!=0);
   delete []ptr;
       return 0;
}

void display(int *p)
{   
    cout<<"\n Array is : ";
    int i;
    for(i=0;i<n;i++)
    {
      cout<<" "<<p[i];
    }
    cout<<",\n";
  
}

void sum_average_dynamic_array(int *prr)
{
    int sum=0, i,j;
    float avg =0.0;
    for(i=0;i<n;i++)
    {
        sum = sum + prr[i];
    }
    cout<<"\n Sum of array Elements is = "<<sum; 
    avg = (float)sum / i;
    cout<<"\n Average of array Elements is = "<<avg;
}

void largest_smallest(int *p)
{
    int i,j,lrg,sml;
    lrg=p[0];
    sml=p[0];
    for(i=0;i<n;i++)
    {
       if (p[i]>lrg)
       lrg=p[i];
       
       if (p[i]<sml)
       sml=p[i];
    }

    cout<<"\n Largest array element is  : "<<lrg;
    cout<<"\n Smallest array element is : "<<sml;
}

void largest_2largest(int *p)
{
    int i, lrg, slrg;
     lrg=p[0];
     slrg=p[0];
     for(i=0;i<n;i++)
    {
       if (p[i]>lrg)
       {
         slrg= lrg;
         lrg=p[i];
       }
    } 
    cout<<"\n Largest array element is  : "<<lrg;
    cout<<"\n Second largest is : "<<slrg;      
}

void shift_to_left(int *p)
{
    
  int i ,temp = p[0];
  cout<<"Shifting to left\n";
  for(i=0;i<n;i++)
  {
      p[i]=p[i+1]; 
  }
  p[i-1]=temp;
  display(p);

}

void shift_to_right(int *p)
{
  int i ,temp1;
  for(i=0;i<n;i++)
        p[i]= i+10;
  temp1=p[n-1];
  cout<<"Shifting to right\n";
  for(i=(n-1);i>=0;i--)
  {
      p[i]=p[i-1]; 
  }
  p[0]=temp1;
  display(p);
}

/*void insert(int *p)
{
  int pos,val;
  cout<<"\n Enter position and Values you want to insert : ";
  cin>>pos>>val;  
  int i,temp = p[pos];
  for (i=0;i<n;i++)
  {
       if(i>=pos)
       {
        p[i+1]=p[i];
        p[pos]= val;
       }
  }
}

void delete_arr(int *p,int pos,int val)
{
int i,temp = p[pos];
  for (i=0;i<n;i++)
  {
       if(i>=pos)
       {
        p[i+1]=p[i];
        p[pos]= val;
       }
  }
}*/

int search(int *p,int val)
{
      int i;
      for(i=0;i<n;i++)
      {
        if(p[i]==val)
        break;
      }
    return i+1;
}

void display_reverse(int *p)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
      cout<<" "<<p[i];
    }
    cout<<",\n";
    
}