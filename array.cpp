#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,2,4,2};
    cout<<marks[3]<<" array 1"<<endl;
    int mathmarks[4];//represents the lenght of the sting
    mathmarks[0]=21;
    mathmarks[1]=23;
    mathmarks[2]=32;
    mathmarks[3]=33;
    for (int i = 0; i <= mathmarks[4]; i++)

    {
        cout<<mathmarks[i]<<endl;
    }
    

    return 0;
}