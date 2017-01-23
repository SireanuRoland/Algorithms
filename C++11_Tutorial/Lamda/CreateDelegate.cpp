#include <iostream>
#include <string>
#include <functional>

using namespace std;

class NumbersReceiver
{

	public:
		void SetHandler(function<int(int , int)> f)
		{
			fnct = f;
		}


		void ReceiveNumbers(int a , int b)
		{
			if(fnct)
			{
				cout << fnct(a , b)<<endl;
			}
		}


	private:
		function<int(int , int)> fnct;

};



class MathOperations
{
	public:
		int Sum(int a , int b)
		{
			return a+b;
		}
};




int main()
{
	
	NumbersReceiver nrRec;
	MathOperations mathOp;

	nrRec.SetHandler([&mathOp](int a , int b) -> int { return mathOp.Sum(a,b); });

	nrRec.ReceiveNumbers(3 , 5);


	return 0;
}