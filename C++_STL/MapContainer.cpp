#include <iostream>
#include <map>
using namespace std;


void keyCompareOpp()
{
	map<char , int> myMap;
	map<char , int>::key_compare keyCompare = myMap.key_comp();		//Build a functor

	myMap.insert(pair<char , int>('a' , 1));
	myMap.insert(pair<char , int>('b' , 2));
	myMap.insert(pair<char , int>('c' , 3));

	map<char , int>::iterator it = myMap.begin();

	do
	{		
		cout<<it->first<<" , "<<it->second<<endl;
		

	}while(keyCompare((*(it++)).first , myMap.rbegin()->first));

}


void upperLowerBounderOpp()
{
	map <string , int> myMap;
	map <string , int>::iterator itlow,ithigh;


	myMap.insert(pair<string,int>("AAA" , 10));
	myMap.insert(pair<string,int>("AAB" , 9));
	myMap.insert(pair<string,int>("ABB" , 8));	
	myMap.insert(pair<string,int>("BBC" , 6));
	myMap.insert(pair<string,int>("BCC" , 5));
	myMap.insert(pair<string,int>("CCC" , 4));
	myMap.insert(pair<string,int>("BBB" , 7));

	itlow = myMap.lower_bound("AAB");
	ithigh = myMap.upper_bound("BCC");

	myMap.erase(itlow , ithigh);


	/*
		range based auto recognise : - arrays 
									 - containers that has .begin() , end()
									 -
	*/

	for(const auto &it : myMap)
	{
		cout<<it.first<<" has value "<<it.second<<endl;
	}



}


void findOpp()
{
	map<char , int>::iterator itr;
	map<char , int> mapContainer;

	mapContainer['z'] = 24;
	mapContainer['h'] = 21;
	mapContainer['f'] = 17;
	mapContainer['w'] = 25;
	mapContainer['p'] = 19;

	for(const auto &it : mapContainer)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}

	itr = mapContainer.find('f');

	if(itr != mapContainer.end())
		cout<<"Element has been found and his values is "<<itr->second<<endl;
	else
		cout<<"Element has not been found in map !"<<endl;


}

 
int main()
{

	keyCompareOpp();
	upperLowerBounderOpp();
	findOpp();


	return 0;
}