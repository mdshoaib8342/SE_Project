#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

void modify(int n)

{
    system("cls");
    fstream infile;
    infile.open("Report.txt",ios::binary|ios::in|ios::out);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
        cin.ignore();
        cin.get();
    }
     bool checker=false;
     cout<<"\t\t\t\t==========MODIFY A REPORT CARD==========\n\n";
     // Find student by roll number
     while(!infile.eof() && checker==false)
     {
     infile.read(reinterpret_cast<char*>(&s),sizeof(student));
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
      
        cout<<"============================================="<<endl;
        cout<<"\t\tENTER THE NEW INFORMATION"<<endl;
        cout<<"============================================="<<endl;

         cout<<"ENTER YOUR FULL NAME :";
    cin.ignore();
    cin.getline(s.name,80);

    cout<<"ENTER YOUR ROLL NUMBER :";
     cin.ignore();
    cin>>s.roll;
    cout<<"ENTER YOUR DATE OF BIRTH :";
     cout<<"\t\tENTER DATE :";
    cin>>s.DoB.date;
     cout<<"\t\tENTER MONTH :";
    cin>>s.DoB.month;
     cout<<"\t\tENTER YEAR :";
    cin>>s.DoB.year;
   
   
    cout<<"ENTER YOUR BRANCH :";
     cin>>s.branch;
    cout<<"ENTER YOUR SEMESTER :";
    cin>>s.year;

    cout<<"ENTER YOUR Mobile NUMBER : ";
    cin.ignore();
    cin.get(s.phone, 10);
    cout<<"ENTER YOUR Academic details :\n";
    vector<float> ok = cal.CGPA();
    float stu_gpa = ok[0];
    float stu_cgpa = ok[1];
     s.gpa = stu_gpa;
    s.cgpa = stu_cgpa;

   
   cout<<"\n\n";

        int pos=(-1)*static_cast<int>(sizeof(student));
        infile.seekp(pos,ios::cur);
        infile.write(reinterpret_cast<char *> (&s), sizeof(student));
        cout<<endl;
        cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY updated"<<endl;
        checker=true;
         }
     }
     }
     infile.close();
         if(checker==false)
            cout<<"\t\t\t\tRECORD NOT FOUND"<<endl;
            cout<<endl;
            cout<<"press any key to continue...";
            cin.ignore();
            cin.get();
  }
