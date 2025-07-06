#include <iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> arr, int tar){
    int start=0;
    int end=arr.size()-1;
    
    
    while(start<=end){
        int mid=(start+end)/2;
        
        if(tar>arr[mid]){
            start=mid+1;
        }else if(tar<arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1={1,4,6,12,15,8};
    int tar1 =15;

    cout<<binarySearch(arr1,tar1)<<endl;
    return 0;
}
