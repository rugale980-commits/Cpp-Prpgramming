#include <iostream>
using namespace std;

class Demo
{
public:
    void fun(int i)
    {
        cout << "First definition ";
    }
    void fun(int i, int j)
    {
        cout << "second defination";
    }
};
int main()
{
    Demo obj; // Demo obj();

    obj.fun(10);
    obj.fun(20);

    return 0;
}