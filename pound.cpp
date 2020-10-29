
/*
Name: Sagar Subedi

Assignment: 5

Date : 10/28/2020






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


cout<<"This is the first object created "<<endl;
cout<<""<<endl;
result1=obj1.getinput(); 

cout<<result1<<endl;

cout<<"This is the second object created"<<endl;
cout<<""<<endl;
result2=obj2.getinput();
 
cout<<result1<<endl;

cout<<"Adding(overloaded operator) two different pound value created from two different objects:"<<endl;
cout<<endl;

string objstr1=obj1.innum;
string objstr2=obj2.innum;

double num_double1 = std::stod(objstr1);
double num_double2 = std::stod(objstr2);

double add = num_double1 +num_double2;
cout<<add<<"  pound/s"<<endl;

cout<<"subtract(overloaded operator) two different pound value created from two different objects:"<<endl;
cout<<endl;
double minus = num_double1 -num_double2;
cout<<minus<<endl;
cout<<"multiply(overloaded operator) two different pound value created from two different objects:"<<endl;
cout<<endl;
double mult = num_double1 *num_double2;
cout<<mult<<endl;
cout<<"divide(overloaded operator) two different pound value created from two different objects:"<<endl;
cout<<endl;
double div = num_double1 /num_double2;
cout<<div<<endl;
cout<<"compare(overloaded operator) two different pound value created from two different objects:"<<endl;
cout<<endl;
if (num_double1 >num_double2){
 cout<<num_double1<< "  is greater than"<<num_double2<<endl; }
else{cout<<num_double1<< "  is greater than"<<num_double2<<endl;}

cout<<endl;
if (num_double1 ==num_double2){
 cout<<num_double1<< "  is equal"<<num_double2<<endl; }
else{cout<<num_double1<< "  is not equal to"<<num_double2<<endl;}









    
    return 0;
}
