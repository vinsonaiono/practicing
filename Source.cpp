#include<iostream>
#include<string>
using namespace std;


class VinsonsClass
{
public:
	//make a variable called name
	string name;
};
int main()
{
	//create an object for 
	VinsonsClass vinsonsObject;
	vinsonsObject.name = "vinson AIono";

	cout << vinsonsObject.name;
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

