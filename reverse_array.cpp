
#include <iostream>
using namespace std;


int main()
{
    int size, inpu,g=0;
    int array1[30];
    int array2[30];
    cout << "Enter the size of array:";
    cin >> size;
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the" <<" "<< i + 1 << " " << "element:";
        cin >> inpu;
        array1[i] = inpu;
    }
    cout << "Reverse Array" << endl;
    for (int j = size - 1; j >= 0; j--)
    { 
        array2[g] = array1[j];
        cout << array2[g] << endl;;
        g++;

    }
        

    
}

