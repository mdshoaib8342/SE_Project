#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

void result(int n)

{
    system("cls");
    ifstream infile;
    infile.open("Report.txt",ios::app|ios::binary);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
        cin.ignore();
        cin.get();
    }
    bool eq=false;
    cout<<"\t\t\t\t===========VIEW A SINGLE STUDENT RESULT==========\n\n";

    // Find student by roll number
    while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        if(s.roll==n)
        {
            
             cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
       
        cout<<"\t\t\t\tSTUDENT ROLL NUMBER :"<<s.roll<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT DATE OF BIRTH :"<<s.DoB.date<<"-"<<s.DoB.month<<"-"<<s.DoB.year<<endl<<endl;
       cout<<"\t\t\t\tSTUDENT PHONE NUMBER :"<<s.phone<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT DEPARTMENT :"<<s.branch<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT CURRENT SEMESTER :"<<s.year<<endl<<endl;
       cout<<"\t\t\t\tSTUDENT GPA :"<<s.gpa<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT CGPA :"<<s.cgpa<<endl<<endl;
     
     
        cout<<"\t\t\t\t=================================================="<<endl;
        eq=true;
        }
    }
        infile.close();
        if(eq==false)
            cout<<"\t\t\t\tRECORD NOT FOUND..."<<endl;
            cout<<endl;
            cout<<"press any key to continue...";
            cin.ignore();
            cin.get();
}
