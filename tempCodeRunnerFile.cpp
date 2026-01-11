#include<iostream>
#include<string>
using namespace std;
class binary{
    private:
    string s;
    public:
    void read(void);
    void chk_bin(void);
    void disp(void);
    void comp(void);
};
void binary ::read(void){
    cout<<"Enter the binary digits:";
    cin>>s;
};
void binary :: disp(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Wrong input";
        }
    }
}
void binary ::comp(){
    for(int i=0;i< s.length();i++){
        if(s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    };
};
void binary :: disp(void){
    cout<<"The binary digits are:";
    for(int i=0 ;i<s.length();i++){
        cout<<s.at(i);
    }
};
int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.disp();
    
    return 0;
}