#ifndef _POUND_H_
#define _POUND_H_
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class pound
{
    private:
    double initNum;   //data members
    
    public:
     string innum;

    pound(){initNum=0;}
    

    pound(double num1)
    {
       initNum=num1;
        
    }
    
    /* Copy constructor */
    pound (const pound &sam)
    {
        initNum = sam.initNum;
       
    }


  
    
    string  getinput(void)
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
