#include<iostream>
using namespace std;
<<<<<<< HEAD

int main(){
    int a=1, b =28938,c;
    cout<<"Maximum is :"<<((a<b)?b:a)<<endl;
    

=======
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
>>>>>>> f3de79981d611ccfa0d951ed6683b7a762d89503
    return 0;
}