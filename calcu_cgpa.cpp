#include <bits/stdc++.h>
#include<windows.h>

using namespace std;

class calculate{
    public:
    
    vector<float>  CGPA(){
           int credit =0, total = 0;
           int n;
            int sms;
        cout<<"Enter your semester:"<<endl;
        cin>>sms;
            vector<float> v;
        cout<<"Enter the no. of courses:"<<endl;
        cin>>n;

        cout<<"Enter the no. of credits & the obtained grade for each courses:"<<endl;
        while(n--){
            int a;
            char b;
            int c;
            cin>>a>>b;
            switch (b)
            {
            case 'S' :
            {
                c =10;
                break;
            }
            case 'A' :
            {
                c =9;
                break;
            }
            case 'B' :
            {
                c =8;
                break;
            }
            case 'C' :
            {
                c =7;
                break;
            }
            case 'D' :
            {
                c =6;
                break;
            }
            case 'E' :
            {
                c =5;
                break;
            }
            case 'F' :
            {
                c =0;
                break;
            }

            default:
            {
                cout<<"INVALID CHARACTER!"<<endl;
            }
                break;
            }
            total += c*a;
            credit += a;

        }

        // GPA = (sum 0f credit of each subject*obtained grade in that subject for all cources ) / (sum of credits of all subjects)
    
        float x = (float)total;
        float y = float(credit);
        float gpa = x/y;;
        cout<<"Your GPA is: "<<gpa<<endl;
        v.push_back(gpa);
        int crt =0;
        cout<<"Enter credits in each semester:-"<<endl;

        for(int i = 0; i<sms-1; i++){
            int l;
            cout<<"Semester "<<i+1<<": ";
            cin>>l;
            crt += l;
        }
       
        cout<<"Enter current CGPA: ";

        float pre_CGPA;
        cin>>pre_CGPA;
         float sum_credit = (float)crt;
        float curr_cgpa = (pre_CGPA*sum_credit + y*gpa)/(sum_credit + y);
        cout<<"YOUR CGPA IS: "<<curr_cgpa<<endl;
        v.push_back(curr_cgpa);
        Sleep(20000);
        return v;
    }
};
