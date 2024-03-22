#include<iostream>
using namespace std;

struct college_info{
    
    string college_name;
    int college_code;
    string dept;
    int intake;
};

int main(){
    college_info i1;
    i1.college_name = "Govt. Poly. Junagadh";
    i1.college_code = 619;
    i1.dept = "Computer";
    i1.intake = 72;
    
    
    cout<< "college name :"<<i1.college_name<<endl;
    cout<< "college code :"<<i1.college_code<<endl;
    cout<< "department :"<<i1.dept<<endl;
    cout<< "intake :"<<i1.intake<<endl;
    return 0;
}
