#include<iostream>
using namespace std;


int addNumbers(int x, int y);

int main()
{
	int x, y;
	cout << "Please enter two numbers to add" << endl;
	cout << "First number: " ;
	cin >> x;
	cout << "Second Number: " ;
	cin >> y;
	cout << endl << "=" << addNumbers(x, y) << endl << endl;


	system("PAUSE");
	return 0;
}


int addNumbers(int x, int y)
{
	int answer = x + y;
	return answer;
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