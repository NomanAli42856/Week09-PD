#include<iostream>
using namespace std;

main()
{

    system("cls");

    string st1;
    string st2;
    cout << "Enter the first string : ";
    cin >> st1;
    cout << "Enter the second string : ";
    cin >> st2;
    int len = st1.length();
    int count = 0;
    for(int i = 0;i < len;i++)
    {
        for(int j = 0  ;j < len ;  j++)
        {
            if(st1[j] == st2[i])
            {
                count++;   
            }
        }
        
    }
    cout << "Same letters   :   " << count  ;
}