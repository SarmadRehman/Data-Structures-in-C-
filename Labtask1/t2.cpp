#include<iostream>

using namespace std;
int main()
{
   int array[10];
   int i;
   int sum=0;
   
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++){
   	cin>>array[i];
   }
      
   for(i=0; i<10; i++)
   {
   	sum += array[i];
   }

   cout<<endl<<"The Sum of all the elements in an array is: "<<sum;
   
   return 0;
}
