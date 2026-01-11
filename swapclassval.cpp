#include<iostream>
using namespace std;
class Y;
class X{
    int val1;
    friend void exchange(X & c1, Y & c2);
    public:
    void getdata(int value){
        val1=value;
    }
    void display(){
        cout<<val1 <<endl;
    }

};
class Y{
    int val2;
    friend void exchange(X & c1, Y & c2);
    public:
    void getdata(int value){
        val2=value;
    }
    void display(){
        cout<<val2 <<endl;
    }


};
void exchange(X & c1, Y & c2){
    int temp= c1.val1;
    c1.val1=c2.val2;
    c2.val2=temp;
}
int main(){
    X obj1;
    obj1.getdata(5);
    Y obj2;
    obj2.getdata(6);
    exchange(obj1,obj2);
    cout<<"The swap val1 is:";
    obj1.display();
    cout<<"The swap val2 is:";
    obj2.display();


    
    return 0;
}