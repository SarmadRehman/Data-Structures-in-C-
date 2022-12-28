#include <iostream>

using namespace std;

int binarySearch(int arr[], int indexer, int sizer, int choice)
{
    if (sizer >= indexer)
{
int middle_E = (indexer + sizer) / 2;

        if (arr[middle_E] == choice)
        {
            return middle_E;
        }

        if (arr[middle_E] > choice){
            return binarySearch(arr, indexer, middle_E - 1, choice);
        }

    return binarySearch(arr, middle_E + 1, sizer, choice);
}

    return -1;
}

int main()
{
    int arr[6];
    cout<<"Enter 6 elements in Ascending order in an array\n"<<endl;
    for(int i=0;i<6;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr[i];
    }
cout<<endl;

    cout<<"please enter number you want to search in an array : ";
    int choice;
    cin>>choice;

    int index = 0;
    int size =5;

    int result = binarySearch(arr, index, size, choice); //Here 0 is index at which it will start searching,5 is length of aray-1.

    if(result == -1){
        cout << "\nElement is not present in array";
    }
    else{
        cout << "\nElement is present at index " << result;
    }

    return 0;
}
