#include<iostream>
using namespace std;
void dancemove(string);
bool inputvalidation(string);
main()
{

    system("cls");

    string dmv;
    cout << "Enter the PIN Code: ";
    cin >> dmv;

    while(true)
    {
        if(inputvalidation(dmv))
        {
            dancemove(dmv);
            break;
        }
        else
        {
            cout << "Wrong Input  !" << endl;
            cout << "Enter the PIN Code again: ";
            cin >> dmv;
        }
    }
    
    
}

void dancemove(string dmv)
{
    string dance[10] = {"Shimmy" , "Shake" , "Pirouette" , "Slide" , "BoxStep" , "Headspin" , "Dosado" , "Pop" , "Lock" , "Arabesque"};
    for(int i = 0;i < 4;i++)
    {
        int temp = (int(dmv[i])-48+i)%10;
        //int z = j + i;
        //int a = z % 10;
        cout << dance[temp] << "\t";
    }
}


bool inputvalidation(string dmv)
{
    int len = dmv.length();
    bool flag = true;
    int count = 0;
    for(int i = 0;i < 4;i++)
    {
        int a = int(dmv[i]);
        if(a > 47 && a < 58)
        {
            count++;
        }
    } 

    if(len != 4 || count < 4)
    {
        flag = false;
    }
    return flag;
}