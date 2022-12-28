#include <iostream>
using namespace std;
int main()
{
	    int arr[6];
	    int N ;
	cout<<"Enter the size of Array : ";
	cin>>N;


    cout<<"Enter elements in array\n"<<endl;
    for(int i=0;i<N;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr[i];
    }
	
    cout<<endl;

    cout<<endl<<endl;
	cout<<"Even Numbers in the user entered array are :"<<endl;
	for(int i=0; i<N; i++)
	{
		if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
	}

	cout<<endl<<endl;
	cout<<"Odd Numbers in the user entered array are :"<<endl;
	for(int i=0; i<N; i++)
	{
		if (arr[i] % 2 == 1)
            cout << arr[i] << " ";
	}

	cout<<endl<<endl;
	cout<<"Prime Numbers in the user entered array are :"<<endl;
	for(int i=0 ; i<N ; i++)//i=1
	{
		int j;
		for(j=2;j<arr[i];j++)
			if(arr[i]%j==0)
				break;
		if(arr[i]==j && arr[i]>1 )
			cout << arr[i] << " ";
	}

	cout<<endl<<endl;
	cout<<"Complete square Numbers in the user entered array are :"<<endl;
	for(int i=0 ; i<N ; i++)
	{
		int j=0, m;
		m = j * j;
		while (m < arr[i])
		{
			j = j + 1;
			m = j * j;
		}
		if (m == arr[i])
			cout << arr[i] << " ";
	}

}

