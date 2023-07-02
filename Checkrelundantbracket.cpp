#include<string>
#include<stack>

bool checkRedundantBrackets(string expression) {
	// Write your code here
	int n =expression.length();
	int i=0;
	while(n--){
		if(expression[i]==expression[i+1]&& expression[i]=='('){
			return true;
		}
		else if(expression[i]=='(' &&( expression[i+2]==')' || expression[i+1]==')')){
			return true;
		}
		else {
			i++;
		}
	}
	return false;
	
}