#include <iostream>
using namespace std;
#define MAX_SIZE 101 

class Stack
{
private:
  int A[MAX_SIZE]; 
	int top;   
public:
	// constructor
	Stack()
	{
		top = -1;
	}

	// Push operation to insert an element on top of stack. 
	void Push(int x) 
	{
	  if(top == MAX_SIZE -1) { 
			printf("Error: stack overflow\n");
			return;
		}
		A[++top] = x;
	}
 
	// Pop operation to remove an element from top of stack.
	void Pop() 
	{
		if(top == -1) { 
			printf("Error: No element to pop\n");
			return;
		}
		top--;
	}
 
	// Top operation to return element at top of stack. 
	int Top() 
	{
		return A[top];
	}
 
	//return 1 (true) if stack is empty, 0 (false) otherwise
	int IsEmpty()
	{
		if(top == -1) return 1;
		return 0;
	}

	// print all the elements in the stack at any stage. 
	void Print() {
		int i;
		printf("Stack: ");
		for(i = 0;i<=top;i++)
			printf("%d ",A[i]);
		printf("\n");
	}
};

int main()
{
	Stack S;
	S.Push(2);S.Print();
	S.Push(5);S.Print();
	S.Push(10);S.Print();
	S.Pop();S.Print();
	S.Push(12);S.Print();
}