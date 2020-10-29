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


cout<<"result of first object created"<<endl;
cout<<""<<endl;
result1=obj1.getinput(); 

cout<<result1<<endl;

cout<<"result of second object created"<<endl;
cout<<""<<endl;
result2=obj2.getinput();
 
cout<<result1<<endl;

cout<<"Adding two different pound value created from two different objects:"<<endl;
string objstr1=obj1.innum;
string objstr2=obj2.innum;

double num_double1 = std::stod(objstr1);
double num_double2 = std::stod(objstr2);

double add = num_double1 +num_double2;
cout<<add<<endl;


double minus = num_double1 -num_double2;
cout<<minus<<endl;

double mult = num_double1 *num_double2;
cout<<mult<<endl;

double div = num_double1 /num_double2;
cout<<div<<endl;

if (num_double1 >num_double2){
 cout<<num_double1<< "  is greater than"<<num_double2<<endl; }
else{cout<<num_double1<< "  is greater than"<<num_double2<<endl;}










    
    return 0;
}
