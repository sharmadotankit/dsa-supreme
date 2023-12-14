#include<iostream>


// using recursion
using namespace std;



//right to left

void lastOccuranceOfChar(string str, char ch,int index,int &ans){
    if(index<0){
        return ;
    }
    
    if(str[index]==ch){
        ans =index;
        return; // we have to return, since we have already encounrted the last occurance after getting the first character. this is different in left to right flow.
    }

    lastOccuranceOfChar(str,ch,index-1,ans);

}

int main(){
    string str = "ankit sharma";
    char ch = 'k';
    int ans =-1;
    lastOccuranceOfChar(str, ch, str.length(),ans);

    if(ans!= -1){
        cout<<"Character found at : "<< ans;
    }else{
        cout<<"Not found";
    }
    return 0;
}

// left to right
// void lastOccuranceOfChar(string str, char ch,int index,int &ans){
//     if(index>=str.length()){
//         return ;
//     }
    
//     if(str[index]==ch){
//         ans =index;
//     }

//     lastOccuranceOfChar(str,ch,index+1,ans);

// }

// int main(){
//     string str = "ankit sharma";
//     char ch = 't';
//     int ans =-1;
//     lastOccuranceOfChar(str, ch, 0,ans);

//     if(ans!= -1){
//         cout<<"Character found at : "<< ans;
//     }else{
//         cout<<"Not found";
//     }
//     return 0;
// }

// using utility function
// #include<iostream>
// #include<string>

// using namespace std;


// int main() {
//     string str = "Hello, World!";
//     char ch = 'o';

//     size_t lastOccurrence = str.rfind(ch);

//     if (lastOccurrence != string::npos) {
//         cout << "Last occurrence of '" << ch << "' found at position: " << lastOccurrence << endl;
//     } else {
//         cout << "'" << ch << "' not found in the string." << endl;
//     }

//     return 0;
// }


