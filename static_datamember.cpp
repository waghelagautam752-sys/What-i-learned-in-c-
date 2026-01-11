#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
        void setdata(void){
        cout<<"Enter the id of the employee:";
        cin>>id;
        count++;
        };
        void getdata(void){
            cout<<"the counter is :"<<count<<"The id of the employee is:"<<id<<endl;
        }
        //only can acces the static var not any other thing
        static void getcount(void){
            cout<<"The count is:"<<count<<endl;
            // cout<<id; giving the error
        }
};
//static var is also know ans class var and Stays alive until the program ends.
//statis var is connected to the class 
//Private. Only the function or file it is in can see it.
int employee:: count; //scope is inside the class
int main(){
    employee g,h,k;// sharing the single count var.
    g.setdata();
    g.getdata();
    employee::getcount();//static is funtion used without the function
    h.setdata();
    h.getdata();
    employee::getcount();
    k.setdata();
    k.getdata();
    employee::getcount();
    return 0;
}