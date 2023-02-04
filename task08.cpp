#include<iostream>
using namespace std;

main()
{

    system("cls");

    int size;
    cout << "Enter the number of colours : ";
    cin >> size;
    string colours[size];
    for(int i = 0;i < size;i++)
    {
        string colour;
        cout << "Enter the colour : ";
        cin >>  colour;
        colours[i] = colour;
        
    }
    int time = 0 ;
    for(int i = 0;i < size;i++)
    {
        if(i==0)
            time = 2;
        else if(colours[i]==colours[i+1])
            time += 2;
        else
            time+=3;
        
    }
    cout << time  ;
}