#include<iostream>
using namespace std;
struct nameofstruct
{
    /* data */
    int age;
    char favchar;
    float salary;
};
typedef struct nameofstruct2
{
    /* data */
    int age;
    char favchar;
    float salary;
} nos;
// you dont have to write the struct in main() instead write nos
// we can use only one thing from the whole set of union we  can use another set beacous the memory ave been share ,union is used for memory management
union money{
    int rice,wheat;
    char car;
    float pounds;
};
int main(){
    enum meal{breakfast,launch,dinner};//use to store the values is c++ 
    // cout<<breakfast;
    // cout<<launch;
    // cout<<dinner;

    meal m2 =dinner;
    cout<<m2;

    // union money m1;
    // // m1.wheat=20;
    // m1.rice=10;
    // cout<<"m1:"<<m1.wheat<<endl;
    // cout<<"m1:"<<m1.rice<<endl;
    // nos waghela;
    // waghela.age=19;
    // waghela.favchar='K';//single colon
    // waghela.salary=0;
    // cout<<waghela.age<<endl;
    // cout<<waghela.salary<<endl;
    // cout<<waghela.favchar<<endl;
    // nos
    return 0;
}