#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

// Student help portal
void help(){
     system("cls");
     system("color a");
    char ch;
    
    cout<<"\t\t\t\t=================STUDENT HELP================\n\n"<<endl;
    Sleep(300);
     cout<<"\t\t\t\t1. HOSTEL AND MESS\n\n";
   cout<<"\t\t\t\t2. INSTITUTE FEE AND COURCES\n\n";
     cout<<"\t\t\t\t3. FACULTY INFORMATION\n\n";
   cout<<"ENTER YOUR CHOICE ACCORDING TO YOUR PROBLEM :";
    cin>>ch;
   switch (ch)
   {
   case '1' :
   {
        cout<<"\t\tVISIT HOSTEL OFFICE (NEAR LASSI SHOP)"<<endl;
        break;

   }
   case '2' :
   {
        cout<<"\t\t VISIT ACADEMIC BUILDING 1st FLOOR"<<endl;
        break;
   }
   case '3' :
   {
                system("cls");
               system("color b");
            cout<<"COURSE\t\tFACULTY NAME\t\tPHONE No-\t\t Email ID/n/n"<<endl;
            cout<<"CSPC41\t\tDr. R. SRIDHAR\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSPC42\t\tDr. M. S. KRISHNA\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSPC43\t\tDr. S. J. NIRMALA\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"HSIR13\t\tDr. R. MURUGESAN\t1234567890\tabcd@gmail.com"<<endl;
            cout<<"CSLR41\t\tDr. M. S. KRISHNA\t\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSLR42\t\tDr. J. NIRMALA\t\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSPE41\t\tDr. C. OSWALD\t\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSPE42\t\tMr. V. VIKRANT\t\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSPE43\t\tDr. B. NITHYA\t\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSOE18\t\tDr. R. B. KRISHNAN\t1234567890\t\tabcd@gmail.com"<<endl;
            cout<<"CSMI11\t\tDr. B. NITHYA\t\t1234567890\t\tabcd@gmail.com"<<endl;
            break;
   }
   }
    cout<<"press any key to continue...";
            cin.ignore();
            cin.get();

}