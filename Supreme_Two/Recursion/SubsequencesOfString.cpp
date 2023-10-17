//============================================================================
// Name        : dsa-supreme-2.cpp
// Author      : Ankit Sharma
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#include<vector>

using namespace std;
// Include and exclude pattern

void subsequencesOfString(string word,string output,int index,vector<string>& ans){
	if(index>=word.length()){
		ans.push_back(output);
		return;
	}



	subsequencesOfString(word,output, index+1,ans);
	output.push_back(word[index]);
	subsequencesOfString(word,output, index+1,ans);

	return;

}


int main(){
	string word = "abc";
	vector<string> ans;
	subsequencesOfString(word,"",0,ans);
	for(string val:ans){
		cout<<"Val : "<< val<<endl;
	}
}
