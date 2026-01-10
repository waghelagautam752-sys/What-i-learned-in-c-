#include<iostream>
using namespace std;
class getclass{
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
        friend void sum(getclass obj);
    };
void sum(getclass obj){
    cout<<"The addtion of this 2 number is:"<<obj.a+obj.b<<endl;
};
int main(){
    getclass obj1;
    obj1.getnum();
    obj1.printnum();
    sum(obj1);
    return 0;
}