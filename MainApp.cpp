#include <iostream>
#include "Object.cpp"

using namespace std;

int main()
{
    int arr[] = {0,1,2};

    for (int i = 0; i < 3; ++i)
    {
        cout << hex << arr[i] << endl;
    }
    cout << endl;

    int* parr;
    parr = new int[3];

    for (int i = 0; i < 3; ++i)
    {
        cout << hex << parr[i] << endl;
    }
    cout << endl;

    delete[] parr;

    Object obj;
    cout << obj.x << endl;

    for (int j = 0; j < 3; ++j) {
        cout << hex << obj.p[j] << " ";
    }
    cout << endl;

    Object* pobj = new Object[3];
    for (int j = 0; j < 3; ++j) {
        cout << pobj[j].p[j] << " ";
    }
    cout << endl;

    return 0; // -- return of main function, research more about how to have a return type of void instead of int
}