#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec={1,2,3,4,5,6,7 };
    vector<int> vec2(5,10);
    for (int i : vec2)
    {
        cout<<"The value at idx is "<<i<<endl;
    }
    
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3); // index 2
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.push_back(7);
    cout << "The total number of elements in the vector is:" << vec.size() << endl << "\n The size of the vector is:" << vec.capacity() << endl;
    // capacity is calculated on 2 raise to n
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "The value at index 2 is " << vec[2] << " or "
    << vec.at(2) << endl;

    // front and back function()
    cout << " Front " << vec.front() << endl;
    cout << " Back " << vec.back() << endl;
    return 0;
}