
#include<iostream>

using namespace std;


int recBinarySearch(int start, int end, int arr[],int target){
	if(start>end){
		return -1;
	}
	int mid = start + (end-start)/2;
	if(arr[mid]==target){
		return mid;
	}else{
		if(arr[mid]<target){
			return recBinarySearch(mid+1,end,arr,target);
		}else{
			return recBinarySearch(start,mid-1,arr,target);
		}
	}
}

int main(){
	int arr[] = {2,3,4,5,6,7,8,9};
	int size = 8;
	int ans = recBinarySearch(0,size,arr,8);
	cout<<"Ans found : "<<ans;
}
