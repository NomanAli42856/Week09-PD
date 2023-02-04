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
    int evnodd;
    cout << "Enter the number of times even odd transformation : ";
    cin >> evnodd;
    for (int i = 0; i < size ; i++)
    {   
        for(int j = 1 ; j <= evnodd ; j++)
        {
            if(array[i] % 2 == 0)
            {
                array[i] = array[i] - 2;
            }
            else
            {
                array[i] = array[i] + 2;
            }
        }
    
    }
    for (int i = 0; i < size ; i++)
    {
        cout << array[i]  << " \t ";
    }
}