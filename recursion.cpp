#include<iostream>
using namespace std;
//Calling the function inside the function
int recursion(int a){
    if(a<=1){
        return 1;
    }
        return a + recursion(a-1);
}
int main(){
    int a;
    cout<<"Enter the last number:";
    cin>>a;
    cout<<"count of natural number is"<<recursion(a);

    return 0;
}