#include<iostream>
using namespace std;
class cname 
{
private:
    int a,b,c;//only accessed by function of this class 
public:
    int d,e;
    void setData(int a1,int b1, int c3);
    void getData(){
        cout<<"Value of a is :"<<a<<endl;
        cout<<"Value of b is :"<<b<<endl;
        cout<<"Value of c is :"<<c<<endl;
        cout<<"Value of d is :"<<d<<endl;
        cout<<"Value of e is :"<<e<<endl;
    }
    
    
};
void cname :: setData(int a1,int a2, int a3){
    a=a1;
    b=a2;
    c=a3;

};


int main(){
    cname obj;
    obj.d=10;//acessing public 
    obj.e=20;//acessing public
   // obj.a=10;//declared in private cant be accessed outside funtion
    obj.setData(1,2,3);
    obj.getData();
    return 0;
}