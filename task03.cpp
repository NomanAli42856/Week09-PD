#include<iostream>
using namespace std;

main()
{

    system("cls");
    
    string name;
    cout << "Enter the string : ";
    getline(cin,name);
    int idx =0;
    while(name[idx] != '\0')
    {
        idx++;
    }
    if(idx%2==0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}