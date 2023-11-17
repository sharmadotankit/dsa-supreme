// Next smaller element

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> nextSmallerElement(int *arr,int size,vector<int> & ans){
	stack<int> st;
	st.push(-1);
	for(int i=size-1;i>=0;i--){
		int curr = arr[i];
		while(st.top() >=curr){
			st.pop();
		}
		
		ans[i] = st.top();
		st.push(curr);
	}
	return ans;
}


int main(){
	int arr[5] = {8,4,6,2,3};
	int size =5;
	vector<int> next(size);
	cout<<"Next"<<endl;
	
	next = nextSmallerElement(arr,size,next);
	for(auto i: next){
		cout<<i<< " ";
	}
	cout<<endl;
	
	return 0;
}