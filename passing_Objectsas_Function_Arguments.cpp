#include <iostream>
using namespace std;
class Time
{
    int s, m;

public:
    void setdata()
    {
        cout << "Enter the min and seconds:";
        cin >> m >> s;
    };
    void getdata()
    {
        cout << "Min:" << m << " seconds:" << s;
    }
    void sum(Time t1,Time t2)
    {
        m = t1.m + t2.m;
        s = t1.s + t2.s;

        if (s >= 60)
        {
            m = m + (s / 60);
            s = s % 60;
        }
    }
};
int main()
{
    Time t1,t2,t3;

    t1.setdata();
    t2.setdata();

    t3.sum(t1, t2);

    cout << "Total time: ";
    t3.getdata();

    return 0;
}
