/*Write a class House which has the following data and functions : (you may add other function members to help you with the program) 
. Name of the house (Data)
2. Address 
3. Rooms 
4. Setup  // Asks for entry of data to house)
5. Display // Displays the details of house - Name, Address, Rooms, Total area of the house (Sum of rooms), Also displays like "3 Bedroom, 1 Kitchen and 2 Bathroom. " - This should use the displays of the address and room class.
6. CopyHouse  // Takes input as a name and a another object of house as input and and copies all the details of the house except the name

Address itself is a class; which stores the following data and functions
1. House Number (CString)
2. City (Cstring)
3. Zipcode (Number)
4. Setup // Asks the user to enter data for address and sets the address
5. Display // Displays the address 

Room also is a class, which store the following data and functions
1. Length
2. Breadth
3. Height 
4. Purpose // Cstring to store "Kitchen, Bathroom, Bedroom etc"
5. Setup // Asks the user to enter data for rooms and sets the room
6. Display // Displays the room details 

Write a suitable main function to create 3 houses with proper details and then display them.
Copy House 1 details to House 2 except the name (name should remain as House 2) and then display all the houses again. 
*/
#include<iostream>
using namespace std;
// to do create a class house and using object that of address and rooms
class address
{
  char hno[40];
  char city[40];
  int zipcode;

public:
void setup()
{

  cout<<"\n enter house no.";
  cin>>hno;
  cout<<"\n enter city name:";
  cin>>city;
  cout<<"\n enter zipcode:";
  cin>>zipcode;
}
void show()
{
  cout<<"\n house no.:";
  cout<<hno;
  cout<<" city name";
  cout<<city;
  cout<<"zipcode";
  cout<<zipcode;
}
}
class room
{
  int length;
  int breadth;
  int height;
  char purpose[40];
  

  }
class house



