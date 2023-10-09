#include<bits/stdc++.h>
using namespace std;
int main(){
    char operation;
    double num1,num2,result;
    //input the two numbers
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"Enter num2 : ";
    cin>>num2;
    cout<<"Enter Your Operation that You Want to Perform('+','-','*','/'): ";
    cin>>operation;

    //Operation
    switch(operation){
        case'+':result=num1+num2;
            break;
        case '-':result=num1-num2;
            break;
        case '*':result=num1*num2;
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error:" << std::endl;
                return 1; 
            }    
            break;
        default:cout<<"Invalid Opearation"<<endl;
                return 1;
    }

    //result
    cout<<"Your Result is : "<<result<<endl;


    return 0;
}