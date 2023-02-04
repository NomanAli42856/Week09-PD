#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    int size;
    bool isFound = false;
    cout << "Enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size ; i++)
    {
        int num;
        cout << "Enter the number : ";
        cin >> num;
        array[i] = num;
    }
    for (int i = 0; i < size ; i++)
    {
        if(array[i]==7)
        {
            isFound = true;
        }
    }
    if(isFound)
    {
        cout << "  Boom !  ";
    }
    else
    {
        cout << " There is no 7 in the array.";
    }
}