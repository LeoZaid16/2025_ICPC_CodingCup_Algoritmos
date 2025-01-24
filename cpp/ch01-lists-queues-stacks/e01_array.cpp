/*
*   ITESS_TICS
*   ICPC    
*   leonardo-zaid@outlook.es
*   22/02/2025
*   Arrays in c++
*   win:    c++ e01_array.cpp -o e01_array.exe
*   cmd:    e01_array.exe
*   ps:     .\e01_array.exe
*/

    // librerias
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> arr;

    arr[0] = 1;
    cout << "First element:" << arr[0] << endl;

    array<int, 4> arr2 = {1, 2, 3, 4};
    cout << "Elements in second array: ";
    for(int i = 0; i < arr.size(); i++)
        cout << arr2[i] << " ";

    // exception
    try
    {
        cout << arr2.at(4);
        cout << arr2.at(5);
    }
    catch (const out_of_range& ex)
    {
        cerr << "EXCEPTION: " << ex.what();
    }
}