#include<iostream>
using namespace std;
class Employ {
public:
    int employenumber;
    string employename;
    int basicsalary;
    double DA;
    int IT;
    double netsalary;
};
int main()
{
    Employ s1;
    cout << "Enter a Employeenumber: " << endl;
    cin >> s1.employenumber ;
    cout << "Enter a Employeename: " << endl;
    cin >> s1.employename;
    cout << "Enter Basic salary: " << endl;
    cin >> s1.basicsalary;
    cout << "Enter DA: " << endl;
    cin >> s1.DA;
    cout << "Enter Income tax: " << endl;
    cin >> s1.IT;
    cout << "Enter a Net salary: " << endl;
    cin >> s1.netsalary;
    
    cout << "Employee name is: " <<s1.employenumber << endl;
    cout << "Enter Employee name:" <<s1.employename << endl;
    cout << "Enter Basic salary:" <<s1.basicsalary << endl;
    cout << "Enter DA: " <<s1.DA << endl;
    cout << "Enter Income tax: " <<s1.IT << endl;
    cout << "Enter Net salary: " <<s1.netsalary << endl;
    return 0;
}
