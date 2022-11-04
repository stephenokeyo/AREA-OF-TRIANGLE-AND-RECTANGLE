#include<iostream> 
using namespace std; 
class SHAPE
{
public: 
virtual double compute()=0; 
};
class TRIANGLE:public SHAPE 
{
public: 
double compute() 
{
return 14*8*0.5; 
} 
}; 
class RECTANGLE:public SHAPE 
{  
public: 
double compute() {
return 14*8;
 } 

}; 
main() 
{
class TRIANGLE T; 
class RECTANGLE R; 
cout<<"Area of Triangle="<<T.compute()<<endl; 
cout<<"Area of Rectangle="<<R.compute(); 
return 0; 
}

