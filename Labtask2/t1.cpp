#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    cout<<"Enter 6 elements in an array\n"<<endl;

    for(int i=0;i<6;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr[i];
    }

cout<<endl;
    for(int i=0;i<6;i++){
            cout<<"The element entered by user at "<<i<<" Index in an array is: ";
        cout<<arr[i];
        cout<<endl;
    }

    return 0;
}
