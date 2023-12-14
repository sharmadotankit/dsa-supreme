#include<iostream>
#include<algorithm>
#include <string>

using namespace std;
// Iterative approach
// void reverseString(string &str){
//     cout<<"came here";
//     int i=0;
//     int j = str.length()-1;
//     while(i<j){
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;

//         i++;
//         j--;
//     }
// }

void recReverseString(string &str, int start,int end){
    if(start>=end){
        return;
    }

    swap(str[start],str[end]);
    recReverseString(str,start+1,end-1);


}

int main(){
    string str ="ANkit sharma";
    cout<<"Before"<<str<<endl;
    // reverseString(str);
    //using utility function
    // for(int i=0,j=str.length()-1;i<str.length();i++,j--){
    //     reverse(str.begin(), str.end());
    // }

    recReverseString(str,0,str.length()-1);
    cout<<"Reversed: "<<str;
    return 0;
}   