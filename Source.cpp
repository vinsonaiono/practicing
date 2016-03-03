#include<iostream>
#include<string>
using namespace std;

//you always want to make your variables in your class PRIVATE*
class VinsonsClass
{
private:
	//make a variable called name
	string name;
	int age;
public:
	//Declare the constructor
	VinsonsClass()
	{
		cout << "Hello Everyone, Please Introduce yourself!" ;
	}
	//we want to change the name & to return the name
	//if we set the string variable to x then it will only equal what name we set it to
	void setName(string x)
	{
		name = x;
	}
	//to get the name that we put in we use getName and return the name of that variable
	string getName()
	{
		return name;
	}
	void setAge(int y)
	{
		age = y;
	}
	int getAge()
	{
		return age;
	}
};
int main()
{
	//declare class object
	//any constructor will automatically be called
	VinsonsClass VO;

	//declare variables for user input to be assigned to
	string x = "";
	int y;

	//ask user for input
	cout << "\n\nwhat is your name: ";
	//assign input to variable x for the name
	cin >> x;
	//ask user for input for age
	cout << "\nHow old are you: ";
	//assign user input for age to variable y
	cin >> y;

	
	//use setters to call the setter functions in vinsonsClass Object
	//setter for the name
	VO.setName(x);
	//setter for the age
	VO.setAge(y);

	//to print the functions use the <object name>.<function name>()
	cout <<"\n\nThank you "<< VO.getName()<< ", you are "<< VO.getAge()<<" years old.\n\n" << endl;
	system("PAUSE");
	return 0;
}



















/*#include<iostream>
using namespace std;
int Calc(int y, int z);
void FavoriteNumber(int x);

int main()
{
int year;
int today;
int age;
cout << "what year were you born? " ;
cout << endl;
cin >> year;
cout << "what year is it today? " ;
cout<< endl;
cin >> today;
Calc(today, year);
FavoriteNumber(age);
system("PAUSE");
return 0;
}
int Calc(int y, int z)
{
int age;
age = y - z;
return age;
}
void FavoriteNumber(int x)
{
cout << "vinson is "<<x<<" years old"<< endl;
}
*/
//===================================================================
/*
int addNumbers(int x, int y);

int main()
{
int x, y;
cout << "Please enter two numbers to add" << endl;
cout << "First number: " ;
cin >> x;
cout << "Second Number: " ;
cin >> y;
cout << endl << "= " << addNumbers(x, y) << endl << endl;


system("PAUSE");
return 0;
}


int addNumbers(int x, int y)
{
int answer = x + y;
return answer;
}
*/

//===================================================================


/*
//declare a class
class VinsonsClass
{
//access specifier
//when using public access specifier means you can use out side of this class
public:
//create a function
void coolSaying()
{
cout << "preaching to the choir " << endl;
}
};


int main()
{
//lets talk about objects
//you need objects to tell what class your working with
//declare object
VinsonsClass vinsonsObject;
//using dot seperators
vinsonsObject.coolSaying();
system("PAUSE");
return 0;
}
*/

