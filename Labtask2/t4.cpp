#include <iostream>

using namespace std;


int main()
{
    int arr[6];
    int tot;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: \n";

    for(int i=0;i<tot;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr[i];
    }
cout<<endl;

    cout<<"please enter number you want to insert in an array : ";
    int choice;
    cin>>choice;

    int pos,i;
    cout<<"Position? at which you want to insert ";
    cin>>pos;

    for(i=tot; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[i] = choice;
    tot++;

    cout<<"\nThe Array after insertion is:"<<endl;
    for(i=0; i<tot; i++){
        cout<<"The element NOW at "<<i<<" Index in an array is: ";
        cout<<arr[i];
        cout<<endl;
    }
    return 0;
}

