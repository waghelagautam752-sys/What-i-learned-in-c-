#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void inmitcounter(void) { counter = 1; }
    void displayprice(void);
    void setprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the id of the item "<<counter<<":";
    cin >> itemid[counter];
    cout << "Enter the price of the item:";
    cin >> itemprice[counter];
    counter++;
};
void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The item ID:"<<itemid[i]<<" Item price:"<<itemprice[i]<<endl;
    }
    
}
int main()
{
    shop dukan;
    dukan.inmitcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}