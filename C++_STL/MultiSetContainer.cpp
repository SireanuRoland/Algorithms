#include <iostream>
#include <set>
using namespace std;


void findOpp()
{

	multiset<int> myMultiSet;

	multiset<int>::iterator it;


	myMultiSet.insert(10);
	myMultiSet.insert(20);
	myMultiSet.insert(20);
	myMultiSet.insert(40);
	myMultiSet.insert(40);

	it = myMultiSet.find(20);
	if(it != myMultiSet.end())
		myMultiSet.erase(it);


	for(it = myMultiSet.begin(); it != myMultiSet.end(); it++)
	{
		cout<<" "<<*it;
	}

	cout<<endl;

}



int main()
{
	
	findOpp();
	return 0;
}