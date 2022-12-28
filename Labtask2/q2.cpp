#include <iostream> 
using namespace std;
int main()
{
	int arr[6]; int count =0 ;
    cout<<"Enter 6 elements in an array\n"<<endl;
    for(int i=0;i<6;i++){
            cout<<"Enter element at "<<i<<" Index in an array: ";
        cin>>arr[i];
    }
cout<<endl;

	cout<<"The duplicate values in user entered array is: ";
	for (int i=0 ; i<6 ; i++)
	{
		for(int j=i+1; j<6; j++)
		{ 
            
			if ( arr[i]== arr[j])
		     { 
		     	cout<<arr[i]<<" ";
                count++ ; 

			 }
            
		} 
     if (i==5) {
        if (count == 0 ) {
            cout << "None \n" ;
        }
	}
    }
	return 0;
}
