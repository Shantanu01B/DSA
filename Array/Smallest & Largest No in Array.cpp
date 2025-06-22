#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int nums[]={12,-3,45,26,-9,25};
    int size=6;
    
    int smallest=INT_MAX;
    int largest=INT_MIN;
    
    for(int i=0;i<size;i++){
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout<<"Smallest Number :"<<smallest<<endl;
    cout<<"Largest Number :"<<largest<<endl;
   
    return 0;
}
