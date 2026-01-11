#include<iostream>
using namespace std;
class employee{
    int id;
    int sal;
    public:
    void setid(void){
        cout<<"Enter the id of the employee:";
        cin>>id;
    }
    void getid(void){
        cout<<"The id of the employee is:"<<id<<endl;
    }
};
int main(){
    // WAY 1    
    // employee rohan,gautam,kajal;
    // rohan.setid();
    // rohan.getid();
    employee fb[4];
    for (int i=0;i<4;i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}