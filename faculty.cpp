#include <bits/stdc++.h>
#include<windows.h>
#include"viewall.cpp"
#include"viewone.cpp"
#include"result.cpp"
#include"update.cpp"
#include"newstud.cpp"
#include"remove.cpp"

using namespace std;

void mainmenu()

{
    system("color c");
    char cc;
    
    cout<<"\t\t\t\t=================MAIN MENU================\n\n"<<endl;
    Sleep(200);
    cout<<"\t\t\t\t1. CREATE STUDENT REPORT CARD\n\n"<<endl;
     Sleep(200);
    cout<<"\t\t\t\t2. VIEW ALL STUDENTs REPORT CARD\n\n"<<endl;
     Sleep(200);
    cout<<"\t\t\t\t3. VIEW A SINGLE STUDENT REPORT CARD\n\n"<<endl;
     Sleep(200);
    cout<<"\t\t\t\t4. MODIFY REPORT CARD\n\n"<<endl;
     Sleep(200);
    cout<<"\t\t\t\t5. RESULT\n\n"<<endl;
     Sleep(200);
     cout<<"\t\t\t\t6. DELETE RECORD\n\n"<<endl;
     Sleep(200);
    cout<<"\t\t\t\t=============================="<<endl;
     Sleep(200);
    cout<<"\t\t\t\tENTER YOUR CHOICE...:) <1-6> : ";
     Sleep(200);
    cin>>cc;
    cout<<endl;
    switch(cc)
    {
    case '1':
        {
            acceptdata();
            break;
        }
    case '2':
        {
            viewall();
            break;
        }
    case '3':
          {
              int n;
              cout<<"ENTER YOUR ROLL NUMBER: ";
              cin>>n;
              view_Specific(n);
              break;
          }
    case '4':
        {
            int n;
            cout<<"ENTER YOUR ROLL NUMBER: ";
            cin>>n;
            modify(n);
            break;
        }

    case '5':
        {
            int n;
            cout<<"ENTER YOUR ROLL NUMBER: ";
            cin>>n;
            cout<<endl;
            result(n);
            break;
        }
    case '6':
        {
            int n;
            cout<<"ENTER YOUR ROLL NUMBER: ";
            cin>>n;
            cout<<endl;
            deleterecord(n);
            break;
        }
    }
}