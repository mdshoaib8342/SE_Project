#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

//Deleting information of student
void deleterecord(int n)

  {
     system("cls");
     ifstream infile;
     infile.open("Report.txt",ios::binary);
     if(!infile)
     {
         cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
         cin.ignore();
         cin.get();
     }
     ofstream outfile;
     outfile.open("Record2.txt",ios::binary);
     infile.seekg(0,ios::beg);
     cout<<"\t\t\t\t===========DELETE A REPORT CARD==========\n\n";
     // Find student by roll number
     while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
     {
        //if student roll number existing the delete the information
         if(s.roll!=n)
         {
             outfile.write(reinterpret_cast<char*>(&s),sizeof(student));
         }
     }
     infile.close();
     outfile.close();
     remove("Report.txt");
     rename("Record2.txt","Report.txt");
     cout<<endl;
     cout<<"\t\t\t\tRECORD SUCCESSFULLY DELETED"<<endl;
     cout<<"press any key to continue...";
     cin.ignore();
     cin.get();

  }