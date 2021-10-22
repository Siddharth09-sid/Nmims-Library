#include<iostream>
using namespace std;

class Student
{
private:
    char name[50];
    int rollno;
    char div[5];
    int id;
    int marks1;
    int marks2;
    int marks3;
    int avg;

public:
    void accept_details();
    void average_marks();
    void  display_details() ;
};
void Student::accept_details()
{
    cout << "Student Details:" << endl;
    cout << "Student name: ";
    cin >> name;
    cout << "Student Roll no: ";
    cin >> rollno;
    cout << "Student Id: ";
    cin >> id;
    cout << "Student Division: ";
    cin >> div;
}
        void Student::average_marks()
            {
                cout << "\nPlease enter Student marks1 :" << endl;
                cin>>marks1;
                cout << "\nPlease enter Student marks2 :" << endl;
                cin>>marks2;
                cout << "\nPlease enter Student marks3 :" << endl;
                cin>>marks3;
                avg=(marks1+marks2+marks3)/3;
                cout << "\n Student avgerage marks:" <<avg<< endl;
            }

            void Student:: display_details()
            {
                cout<< "\nStudent Details are:" << endl;
                cout<< "\nStudent Roll no is: " << rollno;
                cout<< "\nName of the Student is: " << name;
                cout<< "\nDiv of student is: " << div;
                cout<< "\nId of the Student is: " << id<<endl;
            }
            int main(int argc, char *argv[])
                {

                    if (argc>1)
                    {
                        cout<<"Too many arguments supplied. \n"<< argv[1];
                    }
                    else
                    {
                        cout<<"The argument supplied is clear and One argument expected.\n";
                    }
                    Student b1, b2;
                    b1.accept_details();
                    b1.display_details();
                    b1.average_marks();
                    b2.accept_details();
                    b2.display_details();
                    b2.average_marks();
                    return 0;
                }
