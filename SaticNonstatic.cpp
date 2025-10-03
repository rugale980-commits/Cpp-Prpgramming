#include <iostream>
using namespace std;

class MyClass
{
private:
    int privateNonStaticMember;

public:
    MyClass(int val) : privateNonStaticMember(val) {}

    void displayPrivateMember() const
    {
        std::cout << "Private non-static member: " << privateNonStaticMember << std::endl;
    }

    // Static method that can modify a private non-static member of an object
    static void modifyPrivateMember(MyClass &obj, int newValue)
    {
        obj.privateNonStaticMember = newValue; // Accessing private member of 'obj'
    }
};

int main()
{
    MyClass obj1(10);
    obj1.displayPrivateMember(); // Output: Private non-static member: 10

    // Call the static method to modify obj1's private member
    MyClass::modifyPrivateMember(obj1, 20);
    obj1.displayPrivateMember(); // Output: Private non-static member: 20

    return 0;
}