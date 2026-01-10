#include<iostream>
using namespace std;
//funtion prototype
//syntax - type function_name (arguments);
// int name(int a,b); <- not acceptable;
// int name(int,int); <-  Acceptable;
int sum();
int main(){
    cout<<sum();
    return 0;
}
int sum(){
    cout<<"How  many numbers you have to add?:";
    int i,sum=0,num,count=0;
    cin>>count;
    

    for ( i = 0;i<count; i++)
    {
        cout<<"Enter the number:";
        cin>>num;
        sum=sum+num;
    };

    cout<<"Sum of number is :"<<sum;
    return 0;
};