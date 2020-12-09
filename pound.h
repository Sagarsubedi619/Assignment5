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








#ifndef _POUND_H_
#define _POUND_H_
#include <iostream>
#include <string>
#include<iostream>
#include <sstream>


using namespace std;
class pound
{
    private:
    double initNum; 
    string utype="Weight";  //data members
    
    public:
     string innum;

    pound()  //default constructor

{initNum=0;}
    

    pound(double num1) //  constructor that takes in a number
    {
       initNum=num1;
        
    }
    
    /* Copy constructor */
    pound (const pound &sam)
    {
        initNum = sam.initNum;
       
    }


   

 string  gettype(void) 
    { return utype;}


  
    
    string  getinput(void) // get input and ways to output
    {
      string result;
      
      string intype;
      cout<<endl;
      cout<<"please enter num and type"<<endl;
cout<<endl;
      cin>>innum>>intype;

      if ((intype=="Pounds")||(intype=="POUNDS")||(intype=="pound")||(intype=="LBS")||(intype=="lbs")){
      result= innum+" "+intype;

       }
      else{
cout<<endl;
cout<<"bad Input"<<endl;
cout<<endl;
cout<<"please enter num and type"<<endl;
cout<<endl;
      cin>>innum>>intype;
          



}
return result;
       

      
  }







// overloaded assignment operators



pound operator +(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;




}

pound operator -(const pound& pp){

pound lb;

lb.initNum=this->initNum-pp.initNum;
return lb;




}

pound operator *(const pound& pp){

pound lb;

lb.initNum=this->initNum*pp.initNum;
return lb;




}

pound operator /(const pound& pp){

pound lb;

lb.initNum=this->initNum/pp.initNum;
return lb;




}

pound operator<(const pound& pp){

pound lb;

lb.initNum<this->initNum;
return lb;





}

pound operator>(const pound& pp){

pound lb;

lb.initNum>this->initNum;
return lb;
}

pound operator==(const pound& pp){

pound lb;

lb.initNum=+this->initNum;
return lb;
}

pound operator!=(const pound& pp){

pound lb;

lb.initNum!=this->initNum
return lb;
}






 
};


#endif
