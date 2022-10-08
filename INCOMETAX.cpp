#include<iostream>
using namespace std;
class income_tax
{
    public:

    int income;
    float tax=0;

    //making method for tax display
    void tax_info()
    {
        cout<<"your tax will be "<<tax<<endl;
    }

    //making method for income greater than 250000 and less than 50000
    void tax1()
    {
         tax = tax + 0.05*(income - 250000) ;
    }

    //making method for income greater than 500000 and less than 100000
    void tax2()
    {
        tax = tax + tax + 0.05*(500000 - 250000) ;
        tax = tax + 0.2*(income - 500000) ;
    }

};

int main()
{
    income_tax employee;
    employee.income;
    employee.tax;

    cout << "input employee income:"<<endl;
    cin >> employee.income;

    if(employee.income < 250000)
    {
        cout<<"not applicable for tax"<<endl;
    }

    else if(employee.income > 250000 && employee.income < 500000)
    {
        employee.tax1();
        employee.tax_info();
    }

   else if(employee.income > 500000 && employee.income < 1000000)
    {
        employee.tax2();
        employee.tax_info();
    }

    else
    {
        cout<<"your income is greater than 10 lakh "<<endl;
        employee.tax = employee.tax + employee.tax + 0.05*(500000 - 250000) ;
        employee.tax = employee.tax + 0.2*(1000000 - 500000) ;
        employee.tax = employee.tax + 0.3*( employee.income - 100000) ;
        employee.tax_info();
    }
    return 0;
}