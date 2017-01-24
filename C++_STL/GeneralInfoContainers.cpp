#include <iostream>
#include <vector>
#include <algorithm>    // std::for_each
using namespace std;


// Sequence containers(ARRAY & LINKED LIST): vector , deque , list , forward list , array 
// Associative containers(BINARY TREE) : set , multiset , map , multimap
// Unordered containers(HASH TABLE) : unordered set/multiset , unordered map/multimap

/*
	Performance : - Vector: Search O(n) 
							Ins/Del O(n) , O(1) for insertion at end

					Deque:  Search O(n)
							Ins/Del O(n) , O(1) for insertion at begin & end
					
					List:	Search O(n)
							Ins/Del O(1)

					Set:	Search O(Log(n))
							Ins/Del O(Log(n))
					
					MultiSet:	Search O(Log(n))
								Ins/Del O(Log(n))

					Map:	Search O(Log(n))
							Ins/Del O(Log(n))

					Unordered set :		Search O(1)
										Ins/Del O(1)




*/


void f(int x)
{
	cout<<x<<endl;
}


void VectorAndInterators()
{
	vector <int> v;
	v.push_back(1);		v.push_back(2);		v.push_back(3);		v.push_back(4);		v.push_back(5);
	
	for(vector< int >::iterator it = v.begin(); it < v.end(); it++)
	{
		cout<<*it<<endl;
	}

	for_each(v.begin() , v.end() , f);



}




int main()
{
	VectorAndInterators();

	return 0;
}