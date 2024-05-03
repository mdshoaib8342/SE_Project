#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

//entering new student data

void acceptdata()
{
    system("cls");
  
    ofstream outfile;
    //open output file
    outfile.open("Report.txt",ios::app|ios::binary);
    if(outfile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPEN...press enter key";
        cin.ignore();
        cin.get();
    }

    cout<<"\n\n";
    cout<<"\t\t\t\t=======CREATE A REPORT CARD========\n\n";
    cout<<"ENTER YOUR FULL NAME: ";
    cin.ignore();
    cin.getline(s.name,80);

    cout<<"ENTER YOUR ROLL NUMBER: ";
    cin>>s.roll;
    
    cout<<"ENTER YOUR DATE OF BIRTH: "<<endl;
    cout<<"\t\tENTER DATE OF BIRTH: ";
    cin>>s.DoB.date;
     cout<<"\t\tENTER MONTH OF BIRTH: ";
    cin>>s.DoB.month;
     cout<<"\t\tENTER YEAR OF BIRTH: ";
    cin>>s.DoB.year;

    cout<<"ENTER YOUR BRANCH: ";
     cin>>s.branch;
    cout<<"ENTER YOUR YEAR: ";
    cin>>s.year;

    cout<<"ENTER YOUR Mobile NUMBER: ";
    cin.ignore();
    cin.get(s.phone, 11);
    cout<<"ENTER YOUR Academic details:\n\n";

    vector<float> ok = cal.CGPA();
    float stu_gpa = ok[0];
    float stu_cgpa = ok[1];
     s.gpa = stu_gpa;
    s.cgpa = stu_cgpa;

   
   cout<<"\n\n";
    outfile.write(reinterpret_cast<char *> (&s), sizeof(student));
    outfile.close();
    //close output file
    cout<<endl;
    cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY SAVED"<<endl;
    cout<<endl;
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
}