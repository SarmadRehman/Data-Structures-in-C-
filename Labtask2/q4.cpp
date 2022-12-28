#include<iostream>
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

 int max=arr[0];

	for(int i=0;i<6;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}

	int min=arr[0];
	for(int i=0;i<6;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	cout<<endl;
	cout<<endl<<"Largest element in this array is : "<<max<<endl;
	cout<<"\nSmallest element in this array is : "<<min<<endl;
	cout<<"\nDifference between largest and minimum element of array is: "<<max-min;


	return 0;
}
