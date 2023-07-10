#include<iostream>
using namespace std;

class Employee
{
public:
    int Salary[12];
    int year_salary;
public:
    void get_salary()
    {
        for( int i = 0; i < 12; i++)
        {
            int x;
            cout << "Enter the " << i+1 << "  month salary: " <<endl;
            cin >> x;
            while (true)
            {
                if (x < 5000)
                {
                    Salary[i] = x;
                }
                break;
            }

        }
    }
    void print_salary()
    {
        for(int i = 0; i<12; i++)
        {
            cout << Salary[i] << endl;
        }
    }

    int anual_salary()
    {
        for(int i = 0; i<12; i++)
        {
            year_salary += Salary[i];
        }
        return year_salary;

    }
};
// class 2:
class cal_allowance: public Employee
{
public:
    int medi;
public:
    void calc_DR()
    {
        float x = year_salary*(75/100);
        cout << "The Dearness Allowance: " << x << endl;
    }

    void calc_HRA()
    {
        float x = year_salary * (20/100);
        cout << "The HRA: " << x;
    }

    void calc_TA()
    {
        float x = year_salary * (5/100);
        cout << "The TA: " << x;
    }

    int medi_allow()
    {
        if (year_salary = 10000)
        {
            medi = 1000;
            return medi;
        }
        else if (year_salary >=10000)
        {
            return medi = 2500;
        }
    }
};
//3rd class
class Tax_cal: public cal_allowance
{
public:
    double tax;

public:
    void find_tax()
    {
        if (year_salary < 300000)
        {
            cout << "No tax for you.";
        }
        else if (year_salary > 300000 && year_salary < 500000)
        {
            tax = (year_salary-300000)/10;
            cout << "your tax: "<< tax << endl;
        }
        else if ( year_salary > 500000 && year_salary < 1000000)
        {
            tax = (year_salary -500000)/5;
            cout << "your tax: " << tax << endl;
        }
        else if (year_salary > 1000000)
        {
            tax = (year_salary -100000)* 3/10;
            cout << "you tax: " << tax;
        }
    }
};
int main()
{

    Tax_cal rahul;
    rahul.get_salary();
    cout << "Annual salary: " << rahul.anual_salary() << endl;
    //rahul.calc_HRA();
    rahul.find_tax();
    return 0;
}
