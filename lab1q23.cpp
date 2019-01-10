//Write a C++ program to solve the second dgree eqaution aX2+ bX + c= 0  for any real a,b and c
#include<iostream>
#include<cmath>//for mathmatical function
using namespace std;

int main()
{
  float a,b,c,x1,x2;
  cout<<"\n SOLUTION TO QUADRATIC EQUATION : ";
  cout<<"\n enter the 1st term:";
  cin>>a;
  cout<<"\n enter the 2nd term";
  cin>>b;
  cout<<"\n enter the 3rd term:";
  cin>>c;
  
 cout<<"\n required quadratic equation";
 cout<<a<<"X2+"<<b<<"X+"<<c;
 if((b*b-4*a*c)>=0)
{
 cout<<"\n solution to quadratic equation : ";
 
  x1=(-b+sqrt(b*b-4*a*c))*0.5;
  x2=(-b-sqrt(b*b-4*a*c))*0.5;
cout<<"\n the solutions to the quadratic equations are:";
cout<<x1<<"and"<<x2;
}
else
{
  cout<<"\n the solution to the quadratic equation is not possible:";
}
return 0;
}



  
  
  
