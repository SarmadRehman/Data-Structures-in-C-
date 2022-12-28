#include <iostream>

using namespace std;

int findIndex(int arr[], int choice)
{

    for (int i = 0; i < 6; i++){
        if (arr[i] == choice){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6];
    cout<<"Enter 6 elements in an array\n"<<endl;
    for(int i=0;i<6;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr[i];
    }
cout<<endl;

cout<<"please enter number you want to search in an array : ";
    int choice;
    cin>>choice;

   int result = findIndex(arr,choice);

    if(result == -1){
        cout << "\nElement is not present in array";
    }
    else{
        cout << "\nElement is present at index " << result;
    }

    return 0;
}

