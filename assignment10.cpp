#include<iostream>
using namespace std;

int reverse_number(int);
int sum_of_digits(int);
int factorial(int);
int square(int);
int factorial(int);

// main begin
int main ()
{
  int num = 7789,ch,x,n;
    int(*func)(int);
     // menu
     do{
     cout<<"\n Assignment #10 :"
	"\n 1. Find reverse of a number"
	"\n 2. Find sum of digits of a number"
	"\n 3. Find factorial of a number"
	"\n 4. Find square of a number"
	"\n 5. Exit";
	cout<<"\n Enter your choice. ";
	cin>>ch;

   
	switch (ch)
	{
    case 1: func = reverse_number;
            x = func(num);
            cout<<"\n Reverse is : "<<x;
            break;

    case 2: func = sum_of_digits;
            x = func(num);
            cout<<"\n sum_of_digits is : "<<x;
            break;
    case 3: cout<<"\n enter a number :";
            cin>>n;
            func = factorial;
            x = func(n);
            cout<<"\n factorial is : "<<x;
            break; 
    case 4: cout<<"\n enter a number :";
            cin>>n;
            func = square;
            x = func(n);
            cout<<"\n square is : "<<x;
            break;                    
    case 5: break;


    default : break;
	}



     } while (ch!=5);
    return 0;
}  // end of main

int reverse_number(int a)
{
    int rev=0,temp=0;
    while ( a > 0)
    {
        temp = a% 10;
        rev = rev * 10 + temp;
        a = a/10;
    }
    return rev;
}

int sum_of_digits(int a)
{
    int sum=0,temp=0;
    while ( a > 0)
    {
        temp = a % 10;
        sum += temp;
        a = a/10;
    }
    return sum;
}

int factorial(int a)
{
  int fact = 1;
  for(int i=1;i<=a;i++)
  {
    fact =fact*i;
  }
  return fact;
}

int square(int a)
{
    return a*a;
}
