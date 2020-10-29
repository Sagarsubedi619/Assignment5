
/*
Name: Sagar Subedi

Assignment: 5

Date : 10/28/2020


Description     : * This program demostrates the uses of class,constructor, and overloaded assignment operators 
pre-condition   : * a default constructor, that sets the initial value to zero
                  * a constructor that takes in a number (your choice of int, float, double, and so on) and sets the initial value to that
                  * copy constructor
                  * overloaded assignment operator
                  * a way to set and get that value 
                  * comparisons between different instances of your class
                  * ways to input and output your unit
                  * ways to get the name of the unit
post-condition  :  output on the screen


*/





#include "pound.h"
#include <string>
#include <iostream>

/* main function */
int main()
{
  pound obj1(0); 
  pound obj2(0);
  

  
string result1;
string result2;

string type =obj1.gettype();
cout<<endl;
cout<<"Type of unit : "<<type<<endl;
cout<<endl;
cout<<"***This is the first object created*** "<<endl;
cout<<""<<endl;
result1=obj1.getinput(); 

cout<<result1<<endl;
cout<<endl;
cout<<"***This is the second object created***"<<endl;
cout<<""<<endl;
result2=obj2.getinput();
 
cout<<result1<<endl;

cout<<"**Adding(overloaded operator) two different pound value created from two different objects:**"<<endl;
cout<<endl;

string objstr1=obj1.innum;
string objstr2=obj2.innum;

double num_double1 = std::stod(objstr1);
double num_double2 = std::stod(objstr2);

double add = num_double1 +num_double2;
cout<<add<<"  pound/s"<<endl;

cout<<"**subtract(overloaded operator) two different pound value created from two different objects:**"<<endl;
cout<<endl;
double minus = num_double1 -num_double2;
cout<<minus<<endl;
cout<<"**multiply(overloaded operator) two different pound value created from two different objects:**"<<endl;
cout<<endl;
double mult = num_double1 *num_double2;
cout<<mult<<"  pound/s"<<endl;
cout<<"**divide(overloaded operator) two different pound value created from two different objects:**"<<endl;
cout<<endl;
double div = num_double1 /num_double2;
cout<<div<<"  pound/s"<<endl;
cout<<"**compare(overloaded operator) two different pound value created from two different objects:**"<<endl;
cout<<endl;
if (num_double1 >num_double2){
 cout<<num_double1<<"  pound/s"<< "  is greater than"<<num_double2<<endl; }
else{cout<<num_double1<< "  is greater than"<<num_double2<<"  pound/s"<<endl;}

cout<<endl;
if (num_double1 ==num_double2){
 cout<<num_double1<<"  pound/s"<< "  is equal"<<num_double2<<"  pound/s"<<endl; }
else{cout<<num_double1<<"  pound/s"<< "  is not equal to"<<num_double2<<"  pound/s"<<endl;}









    
    return 0;
}
