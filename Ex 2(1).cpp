#include <iostream>
using namespace std;

int main(){
  
  double number1 ;
  double number2 ;
  double add ; 
  double sub ;
  double multi ;
  double div ;
    
    cout<<"Enter value of first number: ";
    cin>>number1 ;
  
    cout<<"Enter value of second number: ";
    cin>>number2;
    
    add = number1 + number2 ;
    cout << "add of num1 and num2 is "<<add<<endl;
  
    sub = number1 - number2 ;
    cout << "sub of num1 and num2 is " <<sub<< endl;
    
    multi = number1 * number2 ;
    cout << "multi of num1 and num2 is " <<multi<< endl;
  
    div = number1 / number2 ;
    cout << "div of num1 and num2 is " <<div<< endl;

return 0;
}
