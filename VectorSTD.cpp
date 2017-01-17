#include <vector>
#include <iostream>
using namespace std;

void SwapOpp()
{
	vector <int> v(10,1);
	vector <int> s(5,2);

	cout<<endl<<"----------SwapOpp----------"<<endl;
	
	s.swap(v);

	std::cout << "s contains:";
	for (int i=0;i<s.size();i++)
		std::cout << ' ' << s[i];
}


void ShrinkToFitOpp()
{
	vector <int> v;

	v.push_back(1);	v.push_back(2);	v.push_back(3);	v.push_back(4);	v.push_back(5);	

	cout<<endl<<"----------ShrinkToFitOpp----------"<<endl;
	cout<<"Size and capacity before calling ShrinkToFit() "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

	v.shrink_to_fit();

	cout<<"Size and capacity after calling ShrinkToFit() "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector	



}

void ResizeOpp()
{
	std::vector<int> myvector;

	cout<<endl<<"----------ResizeOpp----------"<<endl;

	// set some initial content:
	for (int i=1;i<10;i++) myvector.push_back(i);

	myvector.resize(5);		// 1,2,3,4,5,6,7,8,9	->		1,2,3,4,5
	myvector.resize(8,100);	// 1,2,3,4,5,100,100,100
	myvector.resize(12);		// 1,2,3,4,5,100,100,100,0,0,0,0

	std::cout << "myvector contains:";
	for (int i=0;i<myvector.size();i++)
	std::cout << ' ' << myvector[i];
	std::cout << '\n';

}


void ReserveOpp()
{
	std::vector<int> v(10,0);

	cout<<endl<<"----------ReserveOpp----------"<<endl;
	cout<<"Size and capacity before calling reserve() "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

	v.reserve(512);

	cout<<"Size and capacity after calling reserve() "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

}

void PopBackOpp()
{

	std::vector<int> v;

	cout<<endl<<"----------PopBackOpp----------"<<endl;

	v.push_back(1);	v.push_back(2);	v.push_back(3);	v.push_back(4);	v.push_back(5);

	v.pop_back();

	std::cout << "myvector contains:";
  	for (unsigned i=0; i<v.size(); ++i)
    	std::cout << ' ' << v[i];

}

void InsertOpp()
{	
	std::vector<int> v(4,1);
	int array[] = {201,302,403,504};

	cout<<"----------InsertOpp----------"<<endl;

	v.insert(v.begin() , 0);
	v.insert(v.begin()+2 , 0);
	v.insert(v.begin() , array , array+4);

std::cout << "myvector contains:";
  for (unsigned i=0; i<v.size(); ++i)
    std::cout << ' ' << v[i];

}

//Data operation let you access the vector memory address and manipulate elements in unsecure way !
void DataOpp()
{
	std::vector<int> myvector (5);

  int* p = myvector.data();

  cout<<"----------DataOpp----------"<<endl;

  *p = 10;
  ++p;
  *p = 20;
  p[2] = 100;

  std::cout << "myvector contains:";
  for (unsigned i=0; i<myvector.size(); ++i)
    std::cout << ' ' << myvector[i];
  std::cout << '\n';

}

void ClearEraseOpp()
{
	vector < int > v;

	v.push_back(1);	v.push_back(2);	v.push_back(3);	v.push_back(4);	v.push_back(5);

	cout<<"----------ClearOpp----------"<<endl;
	cout<<"Size and capacity before clear call "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

	v.clear();

	cout<<"Size and capacity after clear call "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

	v.push_back(1);	v.push_back(2);	v.push_back(3);	v.push_back(4);	v.push_back(5);
	cout<<"----------EraseOpp----------"<<endl;
	cout<<"Size and capacity before clear call "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

	v.erase(v.begin()+1,v.end()-1);

	cout<<"Size and capacity after clear call "<<endl;
	std::cout << "size: " << (int) v.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) v.capacity() << '\n';	//How much space was allocated for the vector

}

void SizeCapacityOpp()
{

	std::vector<int> myvector;

	cout<<"----------SizeCapacityOpp----------"<<endl;

	 // set some content in the vector:
	for (int i=0; i<101; i++) myvector.push_back(i);

	std::cout << "size: " << (int) myvector.size() << '\n';			//How many elements are in vector
	std::cout << "capacity: " << (int) myvector.capacity() << '\n';	//How much space was allocated for the vector
	std::cout << "max_size: " << (int) myvector.max_size() << '\n';	//Max space that can be allocated

}

void BeginEndOpp()
{
	vector< int > v(10 , 0);

	cout<<"----------BeginEndOpp----------"<<endl;

	for(vector< int >::iterator it = v.begin() ; it < v.end(); it++)
		cout<<*it<<endl;

	//Working with constant itterators , can not modifie the referenced value
	for(auto it = v.cbegin(); it<v.cend(); it++)
		cout<<*it<<endl;		

	v.clear();
	v.push_back(1);	v.push_back(2);	v.push_back(3);	v.push_back(4);	v.push_back(5);

	cout<<endl<<"Using the crbeing ( constant reverse itterator )"<<endl;
	for(auto it = v.crbegin(); it < v.crend(); it++)
	{
		cout<<*it<<endl;
	}


}

void BackFrontOpp()
{
	vector< int > v;

	cout<<"----------BackOpp----------"<<endl;

	v.push_back(5);

	while(v.back() != -1)		//return a reference to the last element in list vector
		v.push_back(v.back() - 1);
	

	for(int i=0; i<v.size(); i++)
		cout<<"v["<<i<<"] = "<<v.at(i)<<endl;


	cout<<"Front of vector v is = "<<v.front()<<endl;		//return a reference to the first element in vector

}


void AtOpp()
{
	vector < int > v;
	vector < int > s(20 , -2);

	v.assign(s.begin()+5 , s.end()-5);		//Copy  elements from s to v

	cout<<"----------AtOpp----------"<<endl;

	for(int i = 0 ; i<v.size(); i++)
	{
		cout<<"v["<<i<<"] = "<<v.at(i)<<endl;
	}

}


void AssignOpp()
{
	vector < int > v;
	vector < int > s;
	vector < int > t;
	int points[] = {1,2,3,4,5,6};


	v.assign(100,-1);		//100 ints with value -1
	v.assign(s.begin()+5 , s.end()-5);		//Copy  elements from s to v

	t.assign(points,points+3);

}



int main()
{
	
	const int N = 100;
	const int M = 100;

	vector< vector<int> > matrix(N , vector< int >(M,0));		// 2D matrix

	for(int i = 0 ; i<N; i++)
		for(int j =0; j<M; j++)
			matrix[i][j] = -1;

	vector<vector<vector<int> > > vec1(10, vector<vector<int> >(10, vector<int>(10)));		// 3D matrix 


	AtOpp();
	BackFrontOpp();
	BeginEndOpp();
	SizeCapacityOpp();
	ClearEraseOpp();
	InsertOpp();
	PopBackOpp();
	ReserveOpp();
	ResizeOpp();
	ShrinkToFitOpp();
	SwapOpp();

	return 0;
}