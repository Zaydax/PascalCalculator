//  Pratik Gangwani
//  ECE 2036 Section A
//  Professor James Hamblen
//  main.cpp
//  PascalCalculator
//
//

#include <iostream> // 

using namespace std;

class Pascaline{

	public:
		explicit Pascaline(); //Constructor Declaration 

// All of the included member functions

		void setRegister1 (int); 
		void setRegister2 (int);
		void setRegisterResult (int);
		int getRegister1 ();
		int getRegister2 ();
		int getRegisterResult ();
		void clearRegisters ();
		void addRegisters ();
		void getInputValues ();
		void displayOutputValue ();
	
	private:

		int register1;
        int register2;
		int registerResult;

};

// Creating the contstructor that intializes your variables 
Pascaline::Pascaline(){
    register1 = 0;
    register2 = 0;
    registerResult = 0;
}

// Sets private variables to function arguments 
void Pascaline::setRegister1 (int reg1)
{
	register1=reg1;
}

void Pascaline::setRegister2 (int reg2) // Must define type of argument
{
    register2=reg2;
}

void Pascaline::setRegisterResult (int regResult)
{
	registerResult=regResult;
}

int Pascaline::getRegister1() // Returns the value of the private variables when the function is called 
{
	return(register1);
}

int Pascaline::getRegister2()
{
	return(register2);
}

int Pascaline::getRegisterResult()
{
	return(registerResult);
}

void Pascaline::clearRegisters(){ //Initializing your private variables in the object 
    register1 = 0;
    register2 = 0;
    registerResult = 0;
}

void Pascaline::addRegisters(){ // Adding the values of the registers together; 
   registerResult=register1 + register2;
}

void Pascaline::getInputValues(){ // Obtaining values for register 1 and register 2 from user
    cout <<endl << "Please input value of register 1: " <<endl <<endl;
    cin >> register1;
    cout <<endl << "Please input value of register 2: " <<endl <<endl;
    cin >> register2;
}

void Pascaline::displayOutputValue(){ // Use getRegister functions to retrieve values of registers from get Input values function
    cout << endl << "Pascaline Result: " << endl <<endl << getRegister1() << " + " << getRegister2() << " = " << getRegisterResult() << endl;
}

int main()
{
	Pascaline myPascaline; // Calling the object and assigning it a name. 

	// We are calling the member functions from the object to obtain results 
	myPascaline.getInputValues (); 
	myPascaline.addRegisters ();
    myPascaline.displayOutputValue();

    return 0;
}

