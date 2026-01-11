#include<iostream>
using namespace std;
//A friend class is a class that is allowed to access private and protected members of another class.

class A{
    int a,b;
    public:
    void getnum(){
            cout<<"Enter the value of a:";
            cin>>a;
            cout<<"Enter the value of b:";
            cin>>b;
        };
        void printnum(){
            cout<<"a="<<a<<"b="<<b;
        
        };
        friend class B;

};
class B{
    public:
    void sum(A obj){
        cout<<"The sum of two numbers is:"<<obj.a+obj.b<<endl;
    }
    void mul();//declaration
};
// Definition outside class using ::
void B:: mul( A obj){
    cout<<"Multiplication of "<<obj.a<<" and "<<obj.b<<" is "<<obj.a*obj.b<<endl;
}

int main(){
    A c1;
    B c2;
    c1.getnum();
    c1.printnum();
    c2.sum(c1);
    c2.mul(c1);
    return 0;
}