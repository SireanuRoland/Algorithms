#include <iostream>
#include <stack>

using namespace std;


void allOperations()
{
	stack <int> stack;


	stack.push(10);
	stack.push(20);

	cout<<"Size of stack is "<<stack.size()<<endl;

	stack.pop();

	cout<<"Size of stack after calling pop() function is "<<stack.size()<<endl;	

	stack.push(100);

	cout<<"Top element in stack is "<<stack.top()<<endl;

	if(stack.empty())
		cout<<"Stack is empty !"<<endl;

	


}


int main()
{
	allOperations();


	return 0;
}