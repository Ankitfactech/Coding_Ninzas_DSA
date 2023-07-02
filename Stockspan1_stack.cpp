#include<bits/stdc++.h>

int* stockSpan(int *price, int size)  {
	// Write your code here
	int ans[size];
	int i=0;
	stack<pair<int,int>>st;
	int date;
	for(auto prices : price){
		date =1;
		while(!stack.empty() && st.top().first<=prices){
			date += st.top().second;
			st.pop();
		}
		st.push({prices,days});
		ans[i]= days;
		i++;
	}
	return ans;
	
	
}