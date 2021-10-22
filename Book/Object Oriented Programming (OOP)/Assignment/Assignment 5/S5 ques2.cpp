#include<iostream>
using namespace std;

class employee
{
private:
    char employee[50];
    int ep_salary;
    int ep_id;
    int ep_work;
    int ep_new1_salary;
    int ep_new2_salary;
    int ep_tot_salary;

public:
    void getinfo();
    void AddSal();
    void  AddWork() ;
};
void employee::getinfo()
{
    cout << "employee Details:" << endl;
    cout << "employee name: ";
    cin >> employee;
    cout << "employee Id: ";
    cin >> ep_id;
    cout << "employee hour of work : ";
    cin >> ep_work;
    cout << "employee salary:";
    cin >> ep_salary;
    cout<<"\n";
    cout<< "\nEmployee Details are:" << endl;
    cout<< "\nName of the employee is: " << employee;
    cout<< "\nId of the employee is: " << ep_id<<endl;
    cout<< "\nNumber of hour-work employee is:" << ep_work;
    cout<< "\nEmployee salary is:"<< ep_salary<<endl;
}
void employee::AddSal()
            {
                if(ep_salary<500)
                {

                    ep_new1_salary=ep_salary+10;
                    cout<<"The salary after incresing 10$ is="<<ep_new1_salary;
                    cout<<"\n";
                }
                else
                {
                    ep_new1_salary=ep_salary;
                    cout<<"Your salary is expected salary\n"<<endl;
                }
            }
void employee:: AddWork()
            {

                if(ep_work>6)
                {
                    ep_new2_salary=5+ep_new1_salary;
                    cout<<"\nThe salary after incresing 5$ is="<<ep_new2_salary<<endl;
                }
                else if(ep_new1_salary>500)
                {
                    ep_tot_salary = (ep_new1_salary + ep_new2_salary) - ep_salary;
                    cout << "The total extra salary is=" << ep_tot_salary << endl;
                }
                else if (ep_new2_salary > 500)
                {
                    ep_tot_salary = (ep_new1_salary + ep_new2_salary) - ep_salary;
                    cout << "The total extra salary is=" << ep_tot_salary << endl;
                }
                else
                {
                    cout << "You want more bonus and salary go get to the work and do some hardwork on your work\n"<< endl;
                }
            }
            int main()
                {
                    employee b1, b2;
                    b1.getinfo();
                    b1.AddSal();
                    b1.AddWork();
                    b2.getinfo();
                    b2.AddSal();
                    b2.AddWork();

                    return 0;
                }
