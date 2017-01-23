#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*					LAMDA EXPRESSIONS 				

	1It is similar with ideea of functor or function pointer .

	Lambda expression can also access variables from the enclosing scope(s). 
	Such a lambda is said to have external references , through " [] ".
	This operator can capture one or many external references , example :
	[&a] , [&a,&b] , [a,&b] , [] or you can capture many external references by one ,
	[=] , this will capture all the variable from the eclosing scope by value
	[&] , this will capture all the variable from the eclosing scope by reference

	How it is implemented ? 

	Lambda expr with external references [&a , b] , create a class with overloaded () operator
	and external references as class members.

	Lambda expr without external references [] , create a simple function
*/


vector<int>numbers = {2,4,6,3,7,9,11,12};


void simpleLamdaExample()
{
	auto f = []()-> void { cout<<"Hello world !"<<endl; };
	f();


	auto f2 = [](int a , int b) -> int { return a + b; };
	cout<<"Sum with lambda expr : 2 + 88 ="<<f2(2,88)<<endl;

}



int main()
{
	//Those two are variables from eclosing scope !
	int numberOfOddNrs = 0 , numberOfEvenNrs = 0;

	//This capture two var from enclosing scope by reference , and take one function argument
	for_each(numbers.begin() , numbers.end() , [&numberOfOddNrs , &numberOfEvenNrs](int nr)
	{
		if( nr % 2)
		{
			cout<<nr<<endl;
			numberOfOddNrs++;
		}
		else
		{
			numberOfEvenNrs++;
		}

	});

	cout<<"Number of odd numbers is "<<numberOfOddNrs<<endl;
	cout<<"Number of even numbers is "<<numberOfEvenNrs<<endl;

	simpleLamdaExample();

	return 0;
}