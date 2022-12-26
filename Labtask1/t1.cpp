#include<iostream>
using namespace std;
int main()
{
    int num;
	int rev=0;
	int rem;
	int temp;
    cout<<"Enter Digit:- ";
    
    cin>>num;
    temp = num;
    
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==num)
        cout<<endl<<"It is a Palindrome Number";
    else
        cout<<endl<<"Not a Palindrome Number";
    cout<<endl;
    return 0;
}





