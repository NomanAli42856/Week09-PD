#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    bool isSame = true;
    string array[4];
    for (int i = 0; i < 4 ; i++)
    {
        string st;
        cout << "Enter the string : ";
        cin >> st;
        array[i] = st;
    }
    for (int i = 0; i < 4 ; i++)
    {
        if(array[i] != array[0])
        {
            isSame = false;
        }
    }
    if(isSame)
    {
        cout << "  True  ";
    }
    else
    {
        cout << "  False";
    }
}