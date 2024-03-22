#include<iostream>
using namespace std;

class convert {
public:
double cm;
double cmtom(){
return cm * 0.01; 
}
double cmtokm(){
return cm * 0.00001;
}
double cmtoft(){
return cm * 0.0328;
}
double cmtoin(){
return cm * 0.3937;
}
};
int main()
{ 
 convert d1;
double i,j,x,y;
    cout << "Enter Value in centimetre: " << endl;
    cin >> d1.cm;
    i = d1.cmtom();
    j = d1.cmtokm();
    x = d1.cmtoft();
    y = d1.cmtoin();
    cout << "CM to Meter: " << i << endl;
    cout << "CM to Kilometre: " << j << endl;
    cout << "CM to Feet: " << x << endl;
    cout << "CM to Inches: " << y << endl;
    return 0;
}
