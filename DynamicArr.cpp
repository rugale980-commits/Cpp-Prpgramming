// C++ program to demonstrate how to dynamically allocate
// array
#include <iostream>
using namespace std;
struct hello
{
    float f;
    int i;
};
int main()
{
    int isize = 5;
    cout << "the size of the array: 5\n";

    // Dynamically allocate an array
    int *arr = new int[5];

    // Assign values to the array elements
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    // Print the array elements
    cout << "Elements of the array are:\n";
    for (int i = 0; i < isize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}