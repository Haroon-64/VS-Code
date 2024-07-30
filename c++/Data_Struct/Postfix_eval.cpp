/*
  Evaluation Of postfix Expression in C++ 
  Input Postfix expression must be in a desired format. 
  Operands must be integers and there should be space in between two operands.
  Only '+'  ,  '-'  , '*' and '/'  operators are expected. 
*/
#include<iostream>
#include<stack>
#include<string>

using namespace std;

// Function to evaluate Postfix expression and return output
int EvaluatePostfix(string expression);

// Function to perform an operation and return output. 
int PerformOperation(char operation, int operand1, int operand2);

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C);

// Function to verify whether a character is numeric digit. 
bool IsNumericDigit(char C);

int main() 
{
	string expression; 
	cout<<"Enter Postfix Expression \n";
	getline(cin,expression);
	int result = EvaluatePostfix(expression);
	cout<<"Output = "<<result<<"\n";
}

// Function to evaluate Postfix expression and return output
int EvaluatePostfix(string expression)
{

	stack<int> S;

	for(int i = 0;i< expression.length();i++) {

 
		if(expression[i] == ' ' || expression[i] == ',') continue; // If character is a delimitter, move on.

		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if(IsOperator(expression[i])) { 
			int operand2 = S.top(); S.pop();
			int operand1 = S.top(); S.pop();
			int result = PerformOperation(expression[i], operand1, operand2);
			S.push(result);
		}
		else if(IsNumericDigit(expression[i])){
			// Extract the numeric operand from the string
			int operand = 0; 
			while(i<expression.length() && IsNumericDigit(expression[i])) { 
				operand = (operand*10) + (expression[i] - '0'); 
				i++;
			}

			i--;
			S.push(operand);
		}
	}
	// If expression is in correct format, Stack will finally have one element. This will be the output. 
	return S.top();
}

// Function to verify whether a character is numeric digit. 
bool IsNumericDigit(char C) 
{
	if(C >= '0' && C <= '9') return true;
	return false;
}

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C)
{
	if(C == '+' || C == '-' || C == '*' || C == '/')
		return true;

	return false;
}

// Function to perform an operation and return output. 
int PerformOperation(char operation, int operand1, int operand2)
{
	if(operation == '+') return operand1 +operand2;
	else if(operation == '-') return operand1 - operand2;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;

	else cout<<"Unexpected Error \n";
	return -1; 
}