#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, size;
    cout<<"Enter the Size for Array: ";
    cin>>size;
    cout<<"Enter "<<size<<" Array Elements: ";
    for(i=0; i<size; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=size; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = elem;
    size++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<size; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
