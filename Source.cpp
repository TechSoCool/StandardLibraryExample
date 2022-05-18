// C++ program to implement Binary Search in Standard Template Library (STL)

#include <algorithm>

#include <iostream>

using namespace std;

void show(int a[], int arraysize)

{
    for (int i = 0; i < arraysize; ++i)

        cout << a[i] << " ";

}

int main()

{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    int asize = sizeof(a) / sizeof(a[0]);   //  this is to find size of your array before exec.

    cout << "The array is: " << endl;

    show(a, asize);



    cout << "Let's say we want to search for 2 in the array" << endl;

    cout << "So, we first sort the array" << endl;

    sort(a, a + asize);

    cout << "The array after sorting is: " << endl;

    show(a, asize);

    cout << "Now, we do the binary search" << endl;

    if (binary_search(a, a + 10, 2))

        cout << "Element found in the array" << endl;

    else

        cout << "Element not found in the array" << endl;

    cout << "\n\nNow, say we want to search for 10";

    if (binary_search(a, a + 10, 10))

        cout << "Element found in the array" << endl;

    else

        cout << "Element not found in the array" << endl;

    return 0;

}