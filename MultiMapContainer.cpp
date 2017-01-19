#include <iostream>
#include <map>
using namespace std;


void eraseOpp()
{
	multimap<char , int > myMultiMap;

	myMultiMap.insert(pair<char , int> ('a',10));
	myMultiMap.insert(pair<char , int> ('b' , 20));
	myMultiMap.insert(pair<char , int> ('b' , 30));
	myMultiMap.insert(pair<char , int> ('b' , 40));
	myMultiMap.insert(pair<char , int> ('a' , 20));
	myMultiMap.insert(pair<char , int> ('c' , 200));
	myMultiMap.insert(pair<char , int> ('d' , 300));
	myMultiMap.insert(pair<char , int> ('d' , 300));

	//Search a key and delete all the values associated with it 
	multimap<char , int>::iterator it = myMultiMap.find('a');

	if(it != myMultiMap.end())
		myMultiMap.erase(it->first);


	//If you know for sure that the key exists in container , than erase it
	myMultiMap.erase('b');


	cout<<"My multimap contains :"<<endl;

	for(char key='a'; key<='d'; key++)
	{
		pair<multimap<char , int>::iterator , multimap<char , int>::iterator> result;

		result = myMultiMap.equal_range(key);
		cout<<key<<" => ";

		for(multimap<char , int>::iterator it = result.first; it != result.second; ++it)
		{
			cout<<' '<<it->second;
		}
		cout<<endl;

	}


}

void equalRangeOpp()
{

	multimap<char , int > myMultiMap;

	myMultiMap.insert(pair<char , int> ('a',10));
	myMultiMap.insert(pair<char , int> ('b' , 20));
	myMultiMap.insert(pair<char , int> ('b' , 30));
	myMultiMap.insert(pair<char , int> ('b' , 40));
	myMultiMap.insert(pair<char , int> ('a' , 20));
	myMultiMap.insert(pair<char , int> ('c' , 200));
	myMultiMap.insert(pair<char , int> ('d' , 300));


	cout<<"My multimap contains :"<<endl;

	for(char key='a'; key<'d'; key++)
	{
		pair<multimap<char , int>::iterator , multimap<char , int>::iterator> result;

		result = myMultiMap.equal_range(key);
		cout<<key<<" => ";

		for(multimap<char , int>::iterator it = result.first; it != result.second; it++)
		{
			cout<<' '<<it->second;
		}
		cout<<endl;

	}

}



int main()
{
	equalRangeOpp();
	eraseOpp();
	
	return 0 ;
}