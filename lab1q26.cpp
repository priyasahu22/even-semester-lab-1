#include<iostream>
#include<cmath>
using namespace std;

//Write a C++ program to calculate the area of a triangle with sides a,b,c
int main()
{
  float a,b,c,area,s;
  cout<<"\n enter dimension of triangle:";
  cin>>a;
  cin>>b;
  cin>>c;
 s=(a+b+c)*0.5;
  
area=sqrt(s*(s-a)*(s-b)*(s-c));
 
 cout<<area;
return 0;
}
