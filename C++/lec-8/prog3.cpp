#include<iostream>
using namespace std;
int main(){
    int b_salary,net_salary;
    cout<<"Enter your Basic salary: ";
    cin>>b_salary;
    int ha,da,ta,ma,pt=300,pf=3000,tds;
    ha = 0.1 * b_salary;
    da = 0.05 * b_salary;
    ta = 0.08 * b_salary;
    ma = 0.02 * b_salary;
    tds = 0.1 * b_salary;
    b_salary = b_salary+ha+da+ta+ma;
    cout<<"House Allowance: "<<ha<<"rs"<<endl;
    cout<<"Dearness Allowance: "<<da<<"rs"<<endl;
    cout<<"Travelling Allowance: "<<ta<<"rs"<<endl;
    cout<<"Medical Allowance: "<<ma<<"rs"<<endl;
    cout<<"Professional Tax: "<<pt<<"rs"<<endl;
    cout<<"Provident Fund: "<<pf<<"rs"<<endl;
    net_salary = b_salary - pt - pf - tds;
    cout<<"Basic Salary: "<<b_salary<<"rs"<<endl;
    cout<<"Your Salary after cutting tax!!"<<endl;
    cout<<"Net Salary: "<<net_salary<<"rs"<<endl;
    return 0;
}