#include<stack>
#include<queue>
void reverseQueue(queue<int> &input) {
	// Write your code here
	stack<int>st;
	while(input.empty()==false){
		st.push(input.front());
		input.pop();
	}
	while(st.empty()==false){
		cout <<st.top() <<" ";
		st.pop();
	}

}