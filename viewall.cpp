#include <bits/stdc++.h>
#include<windows.h>
#include"declare.cpp"
using namespace std;

// View all student record
void viewall()

{
    system("cls");
    ifstream infile;
    bool check=false;
    infile.open("Report.txt",ios::app|ios::binary);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED.....press enter key...";
        cin.ignore();
        cin.get();
    }
     cout<<"\n\n";
     cout<<"\t\t\t\tALL STUDENTS REPORT CARDS"<<endl;
     cout<<"=================================================================================="<<endl;
    while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
       
        cout<<"\t\t\t\tSTUDENT ROLL NUMBER :"<<s.roll<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT DATE OF BIRTH :"<<s.DoB.date<<"-"<<s.DoB.month<<"-"<<s.DoB.year<<endl<<endl;
       cout<<"\t\t\t\tSTUDENT PHONE NUMBER :"<<s.phone<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT DEPARTMENT :"<<s.branch<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT CURRENT SEMESTER :"<<s.year<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT GPA :"<<s.gpa<<endl<<endl;
      cout<<"\t\t\t\tSTUDENT CGPA :"<<s.cgpa<<endl<<endl;
        cout<<"=================================================================================="<<endl;
        check=true;
    }
    infile.close();
    if(check==false)
    cout<<"\t\t\t\tNO RECORD FOUND..."<<endl<<endl;
    cout<<"press any key to continue....";
    cin.ignore();
    cin.get();
}
