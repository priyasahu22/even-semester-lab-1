

//to check a number whether it is prime or not

#include<iostream>
using namespace std;

int main()
{
  int i,n;
   
  cout<<"\n enter an number to check whether it is prime or not:";
  cin>>n;
  
if(n==2)
{
 }
else if(n%2!=0)
{ 
   if(n%3==0)
{
    cout<<"entered number is not a prime number";
}
else
{
  cout<<"the number is prime:";
}
}
else
{
  cout<<"\n entered number is not a prime number";
}
  

return 0;
}

