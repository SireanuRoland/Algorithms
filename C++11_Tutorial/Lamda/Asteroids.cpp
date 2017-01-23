#include <iostream>
#include <map>
#include <string>
#include <functional>
using namespace std;



class Astr
{
	private :
		map <string , int> Asteroids ={{"Klus" , 15874} , {"Bubulica" , 4430} , {"Mouse" , 7841} , {"Ceres" , 946000} , {"Vesta" , 78552} , {"Pallas" , 65543}};

	public:
		map<string , int> IFilterAsteroids(std::function<bool (pair<string , int>)> func);
};

map<string , int> Astr::IFilterAsteroids(std::function<bool (pair<string , int>)> func)
{
	map<string , int>::iterator it ;
	map<string , int> result;


	for(it = Asteroids.begin(); it != Asteroids.end(); it++)
	{
		if(func(*it))
		{
			result.insert(pair<string , int>(it->first , it->second));
		}
	}

	return result;
}



int main()
{
	
	map<string , int> result;

	auto lamdaFunction = [](pair<string , int> asteroid)-> bool { 
		if(asteroid.second > 20000)
			return true;
		else
			return false;
	 };

	 Astr astr;

	 result = astr.IFilterAsteroids(lamdaFunction);

	 for(map<string , int>::iterator it = result.begin(); it != result.end(); it++)
	 {
	 	cout<<"Name = "<<it->first<<" , Value = "<<it->second<<endl;
	 }


	return 0;
}