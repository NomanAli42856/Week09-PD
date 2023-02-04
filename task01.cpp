#include<iostream>
using namespace std;

main()
{

    system("cls");

    string fruit;
    int kgs;
    int prc;
    string fruits[4] = {"peach" , "apple" , "guava" , "watermelon"};
    int price[4] = {60 , 70 , 40 , 30};
    cout << "Enter the fruit : ";
    cin >> fruit;
    cout << "Enter number of kgs : ";
    cin >> kgs;
    for(int i = 0;i < 4;i++)
    {
        if(fruit == fruits[i])
        {
            prc = price[i] * kgs;
        }
    }
    cout << "Total bill   :   " << prc  ;
}