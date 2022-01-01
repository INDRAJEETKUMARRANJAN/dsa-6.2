//call by value

#include<iostream>
using namespace std;
void swap(int a, int b)
{
 int swap;
 swap=a;
 a=b;
 b=swap;
}
int main()
{
 int a=500, b=100;
 swap(a, b);  // passing value to function
 cout<<"Value of a is: "<<a<<endl;
 cout<<"Value of b is: "<<b<<endl;
 return 0;
}
