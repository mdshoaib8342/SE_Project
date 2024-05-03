#include<string>
using namespace std;

// Date of Birth
struct birth
{
    int date, month, year;
};

// Nested structure for student information
struct student
{
char name[80];
char phone[10];
int roll;
int year;
string branch;
struct birth DoB;
float gpa;
float cgpa;
} s;