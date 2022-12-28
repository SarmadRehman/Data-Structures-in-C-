#include <iostream>
using namespace std;
int main()
{
	    int arr1[6];
    cout<<"Enter 6 elements in first array\n"<<endl;
    for(int i=0;i<6;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr1[i];
    }
cout<<endl;
    for(int i=0;i<6;i++){
            cout<<"The element entered by user at "<<i<<" Index in an array is: ";
        cout<<arr1[i];
        cout<<endl;
    }

        int arr2[6];
    cout<<endl<<"Enter 6 elements in second array\n"<<endl;
    for(int i=0;i<6;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr2[i];
    }
cout<<endl;
    for(int i=0;i<6;i++){
            cout<<"The element entered by user at "<<i<<" Index in an array is: ";
        cout<<arr2[i];
        cout<<endl;
    }

int num;
    cout<<endl;
	cout<<endl;
	cout<<"Common elements between two arrays of integers are: ";


for(int i=0;i<6;++i)
	{
		for(int j=0;j<6;++j)
		{
			if(arr1[i]==arr2[j])
			{
				cout<<arr1[i];
				cout<<endl;
			}
		}
	}

	return 0;
}

