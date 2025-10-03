#include <iostream>
using namespace std;

class MyClass
{
private:
    static int count; // Private static characteristic

public:
    MyClass()
    {
        count++; // Can access private static member inside the class
    }

    static void showCount()
    {
        cout << "Count: " << count << endl;
    }
};

// Define the static member outside the class
int MyClass::count = 0;

int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass::showCount(); // Output: Count: 2

    // cout << MyClass::count; // ❌ Error: 'count' is private
    return 0;
}
