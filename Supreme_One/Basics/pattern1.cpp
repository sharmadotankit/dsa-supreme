#include<iostream>

using namespace std;


// Solid Rectangle  3x5
// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// Hollow reactangle
// int main(){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<5;j++){
//             if(i==0|| i==2 || j==0||j==4){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
                
//         }
//         cout<<endl;
//     }
// }


// Half Pyramid
// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Inverted Half pyramid
// int main(){
//     int n;
//     cin>>n;

//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// Full pyramid
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0; j<n-i;j++){
//             cout<<" ";
//         }

//         for(int k=0;k<=i;k++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

// Inverted Full Pyramid

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=0;i--){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



// Solid Daimond
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for(int i=n;i>0;i--){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Hollow Daimond 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }

//         for(int j=0;j<(i*2+1);j++){
//             // cout<<j;
//             if(j==0 || j==2*i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     for(int i=n;i>=0;i--){
//         for(int j=n;j>i;j--){
//             cout<<" ";
//         }

//         for(int j=0;j<(2*i+1);j++){
//             if(j==0 || j==2*i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }   
// }


// Flipped Solid Daimond
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }


//         for(int j=0;j<(i*2+1);j++){
//             if(j==0|| j==2*i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }

//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }


//         cout<<endl;
//     }

//     for(int i=n;i>=0;i--){
//         for(int j=n;j>i;j--){
//             cout<<"*";
//         }

//         for(int j=0;j<(2*i+1);j++){
//             if(j==0|| j==2*i){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }

//         for(int j=n;j>i;j--){
//             cout<<"*";
//         }

//         cout<<endl;
//     }   
// }


// Fancy Pattern
/*
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
6*6*6*6*6*6
6*6*6*6*6*6
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/
/*
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==i){
                cout<<i+1;
            }else{
                cout<<i+1<<"*";
            }
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<n-i;
            if(j !=n-i-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

*/

// Alphabet pyramid palindrome

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            int ans = j;
            char ch = ans+'A';
            cout<<ch;
        }

        for(int j=i;j>0;j--){
             int ans = j;
            char ch = ans+'A'-1;
            cout<<ch;
        }

        cout<<endl;
        
    }
}