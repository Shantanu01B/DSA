
#include <iostream>
using namespace std;


int main() {
    int n;
    int arr[6];
    int sum=0,product=1;

 cout << "Enter the size of the array : ";
    cin >> n;

cout<<"Enter the elements of array"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       sum+=arr[i];
       product*=arr[i];
   }
   
   cout<<"Sum of Array Elements :"<<sum<<endl;
   cout<<"Product of Array Elements :"<<product<<endl;
   
   
   
    return 0;
}
