#include <iostream>
using namespace std;
#define MAX 1000

class Stack {
	int top;

public:// Maximum size of Stack is MAX
	char ArrayStack[MAX]; // datatype of item can be changed

	Stack() { top = -1; }
	bool push(char item);
	char pop();
	char peek();
	bool isEmpty();
};

bool Stack::push(char item)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		ArrayStack[++top] = item;
		cout << item << " pushed into stack\n";
		return true;
	}
}

char Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		char item = ArrayStack[top--];
		return item;
	}
}
char Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		char item = ArrayStack[top];
		return item;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

// Driver program to test above functions
int main()
{
	class Stack Stack1;
	Stack1.push('X');
	Stack1.push('Y');
	Stack1.push('Z');
	cout << Stack1.pop() << " Popped from stack\n";

	//print top element of stack after popping
	cout << "Top element is : " << Stack1.peek() << endl;

	//print all elements in stack :
	cout <<"Elements present in stack : ";
	while(!Stack1.isEmpty())
	{
		// print top element in stack
		cout << Stack1.peek() <<" ";
		// remove top element in stack
		Stack1.pop();
	}

	return 0;
}
