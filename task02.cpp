#include<iostream>
using namespace std;

main()
{

    system("cls");

    string movie;
    int index;
    string movies[5] = {"gladiator" , "starwars" , "terminator" , "takinglives" , "tombrider"};
    cout << "Enter the movie : ";
    cin >> movie;
    for(int i = 0;i < 4;i++)
    {
        if(movie == movies[i])
        {
            index =  i;
        }
    }
    if(index % 2 == 0)
    {
        cout << "Total bill   :   " << 500-500*0.1  ;
    }
    else
    {
        cout << "Total bill   :   " <<  500-500*0.05 ;
    }
}