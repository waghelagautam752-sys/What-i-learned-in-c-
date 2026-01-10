#include<iostream>
using namespace std;

int main(){
    // pointer is datatype which holds the address of orther data type
    int a =3;
    // & it is used for adress of the operator $a it means address of an a

    int *b=&a;
    cout<<"The addresd of a is "<<b<<" or "<<&a<<endl;
    // deferencing operator(value at)
    // says that what is the value at tha address
    cout<<"The value at address "<<b<<" is "<<*b<<endl;

    //pointer that store the addres of the pointer
    //here b is an already an pointer
    int**c=&b;
    cout<<"The address of the pointer b is "<<c;
    return 0;
}