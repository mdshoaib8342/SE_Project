#include <bits/stdc++.h>
#include<windows.h>
#include"introd.cpp"
#include"class.cpp"
#include"faculty.cpp"
#include"stu_help.cpp"

using namespace std;

void student();

int main()
{
    system("color 5");
    char c;
    system("cls");
    intro();

    do{
   system("cls");
   system("color e");

   cout<<"\n\n";
   cout<<"\t====================STUDENT REPORT CARD MANEGEMENT SYSTEM===================="<<endl;
   cout<<endl;
   cout<<"\t\t\t\t1. FACULTY\n\n";
   cout<<"\t\t\t\t2. STUDENT\n\n";
   cout<<"\t\t\t\t3. CALCULATE CGPA AND GPA\n\n";
    cout<<"\t\t\t\t4. EXIT\n\n";

   cout<<"ENTER YOUR CHOICE :";
   cin>>c;
   system("cls");

   switch(c)
   {
   case '1':
    {
        mainmenu();
        break;
    }
    case '2':
    {
        student();
        break;
    }

    case '3':
    {
        cal.CGPA();
        break;
    }
   case '4':
    {          cout << "\t\t     THANK YOU FOR USING THIS SOFTWARE"<<endl;

        cout << "\n\n";
             cout<<"\t   GROUP MEMBERS(DEVELOPERS)";
             cout << "\n\n";
             cout << "\t   NAME                             Roll No.                PHONE NUMBER \n\n";
             cout << "\t   1. MOHD SHOAIB                  106121079               1234567890 \n\n";
             cout << "\n\n";
            
             cout<<"\t\t\t\t\t\t\t\t\t   SUBMITED DATE: 30/04/2024 ";

              cout << "\n\n";
              break;
    }
   }
    }while(c!='4');
    return 0;
}

void student(){
    system("cls");
     system("color c");
    char choice;
    
    cout<<"\t\t\t\t=================STUDENT MAIN MENU================\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t1. VIEW YOUR DATA\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t2. HELP\n\n"<<endl;
     Sleep(300);

     cout<<"ENTER YOUR CHOICE"<<endl;
     cin>>choice;
     
    switch (choice)
    {
      case '1':
        {
            int n;
            cout<<"ENTER YOUR ROLL NUMBER :";
            cin>>n;
            cout<<endl;
            view_Specific(n);
            break;
        }
        case '2' :
        {
            help();
        }
    }
            cin.ignore();
            cin.get();

}
