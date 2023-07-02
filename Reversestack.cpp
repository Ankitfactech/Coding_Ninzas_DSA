#include<stack>
void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    while(input.empty()==false){
        extra.push(input.top());
        input.pop();
    }
    while(extra.empty()==false){
        cout<<extra.top() <<" ";
        extra.pop();
    }

}