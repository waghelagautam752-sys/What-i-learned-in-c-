#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setnumber(int n1, int n2){
            n1=a;
            n2=b;
        }
        void getnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    
    return 0;
}