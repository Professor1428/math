#include<iostream>
using namespace std;

int main()
{
    char num;
    int num1;
    int num2;
    cout<<" select operator "<<endl;
    cin>>num;
    cout<<"enter number1"<<endl;
    cin>>num1;
    cout<<"enter number2"<<endl;
    cin>>num2;
    switch(num)
    {
        case '+':
            cout << " final = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<" final = "<<num1-num2<<endl;
            break;
        case'/':
            cout<<" final = "<<num1/num2<<endl;
            break;
        case'*':
            cout<<" final = "<<num1*num2<<endl;
            break;
            
    }
}
