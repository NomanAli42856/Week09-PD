#include<iostream>
using namespace std;
void addStudent();
void searchStudent();
void deleteStudent();
void changeroll();
void viewStudent();


string names[10] = { "Ali", "Ahmad" , "Bilal"};
int rollno[10] = { 01 , 02 , 03 };
int marks[10] = { 56 , 89 , 47 }; 

main()
{

    system("cls");

    int choice;
    cout << "1-       ADD STUDENT" << endl ;
    cout << "2-       SEARCH STUDENT" << endl; 
    cout << "3-       CHANGE STUDENT ROLL NUMBER" << endl;
    cout << "4-       DELETE STUDENT" << endl;
    cout << "5-       VIEW LIST OF STUDENTS" << endl;
    cout << "ENTER YOUR CHOICE : ";
    cin >> choice;
    if(choice == 1)
    {
        addStudent();
    }
    else if(choice == 2)
    {
        searchStudent();
    }
    else if(choice == 3)
    {
        changeroll();
    }
    else if(choice == 4)
    {
        deleteStudent();
    }

    else if(choice == 5)
    {
        viewStudent();
    }

}


void addStudent()
{
    for ( int j = 1 ; j < 6 ;j++)
    {
        string newstudent;
        int rlno , mrks;
        cout << "Enter the name of student you wanna enter : ";
        cin >> newstudent;
        cout << "Enter his/her roll number : ";
        cin >> rlno;
        cout << "Enter his/her marks : ";
        cin >> mrks;
        for (int i = 0 ; i < 10 ; i++)
        {
            if(names[i] == "")
            {
                names[i] = newstudent;
                rollno[i] = rlno;
                marks[i] = mrks;
                break;
            }
        }
    }
    
    viewStudent();
}


void searchStudent()
{
    string nm;
    cout << "Enter the name : ";
    cin >> nm;
    for (int i = 0 ; i < 10 ; i++)
    {
        if(nm == names[i])
        {
            cout << "     " << names[i] << "    " << "\t\t" << rollno[i]  << "\t\t" << marks[i] << endl;
        }
    }
}



void changeroll()
{
    string nm;
    int rn;
    cout << "Enter the name : ";
    cin >> nm;
    cout << "Enter the new roll number : ";
    cin >> rn;
    for (int i = 0 ; i < 10 ; i++)
    {
        if(nm == names[i])
        {
            rollno[i] = rn;
        }
    }

    viewStudent();
}

void deleteStudent()
{
    string nm;
    cout << "Enter the name : ";
    cin >> nm;
    for (int i = 0 ; i < 10 ; i++)
    {
        if(nm == names[i])
        {
            names[i] = "";
            rollno[i] = 0;
            marks[i] = 0;
        }
    }

    viewStudent();
}


void viewStudent()
{
    cout << "  Student Name  " << "  " << "  Roll Number  " << "  " << "    Marks  " << endl;
    for(int i = 0; i < 10 ; i++)
    {
        cout << "     " << names[i] << "    " << "\t\t" << rollno[i]  << "\t\t" << marks[i] << endl;
    }

}