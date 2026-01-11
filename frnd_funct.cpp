#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void set(int n1, int n2){
            a=n1;
            b=n2;
        };
        //sum complex can't access private data so making sumComplex frnd of the complex
        friend Complex sumComplex(Complex o1, Complex o2);// Sum complex is allowed to use the pirvate data
        void get(void){
            cout<<" The complex number is "<<a<<"  and "<<b<<endl;
        }
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.set((o1.a + o2.a),(o1.b + o2.b));
    return o3;
};
int main(){
    Complex c1,c2,sum;
    c1.set(2,4);   
    c2.set(2,4); 
    c1.get(); 
    c2.get(); 
    
    sum=sumComplex(c1,c2);
    sum.get();
    return 0;
}