/*
Name: Sagar Subedi

Assignment: 5

Date : 10/28/2020


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
    double initNum;   //data members
    
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


   




  
    
    string  getinput(void) // get input and ways to output
    {
      string result;
      
      string intype;
      cout<<"please enter num and type"<<endl;
      cin>>innum>>intype;

      if ((intype=="Pounds")||(intype=="POUNDS")||(intype=="pound")||(intype=="LBS")||(intype=="lbs")){
      result= innum+" "+intype;

       }
      else{cout<<"bad Input"<<endl;
          



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

lb.initNum=this->initNum+pp.initNum;
return lb;




}

pound operator *(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;




}

pound operator /(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;




}

pound operator<(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;





}

pound operator>(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;
}

pound operator==(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;
}

pound operator!=(const pound& pp){

pound lb;

lb.initNum=this->initNum+pp.initNum;
return lb;
}






 
};


#endif
