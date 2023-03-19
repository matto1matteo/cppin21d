#include <iostream>
#include <cmath>

class Employee {
private:
    int mAge;
    int mYearsOfService;
    float mSalary;

public:
    Employee() {}
    Employee(int age, int yearsOfService, float salary);
    ~Employee() {}

    int GetAge() const { return mAge; }
    int GetyearsOfService() const { return mYearsOfService; }
    float GetSalary() const { return mSalary; }

    void SetAge(int age) { mAge = age; }
    void SetYearsOfService(int years) { mYearsOfService = years; }
    void SetSalary(float salary) { mSalary = salary; }

    float ApproximateSalary();
};

int main(int argc, char* argv[])
{
    Employee mike;
    Employee jim;
    Employee jhon(25, 2, 26000);

    mike.SetAge(10);
    mike.SetSalary(10.5);
    mike.SetYearsOfService(0);

    jim.SetAge(40);
    jim.SetSalary(29700);
    jim.SetYearsOfService(15);

    using std::cout;
    using std::endl;

    cout << "Mike" << endl;
    cout << "Age: " << mike.GetAge() << endl;
    cout << "Years of service: " << mike.GetyearsOfService() << endl;
    cout << "Salary: " << mike.GetSalary() << endl;
    cout << "Approximate Salary: " << mike.ApproximateSalary() << endl;

    cout << "Jim" << endl;
    cout << "Age: " << jim.GetAge() << endl;
    cout << "Years of service: " << jim.GetyearsOfService() << endl;
    cout << "Salary: " << jim.GetSalary() << endl;
    cout << "Approximate Salary: " << jim.ApproximateSalary() << endl;

    cout << "Jhon" << endl;
    cout << "Age: " << jhon.GetAge() << endl;
    cout << "Years of service: " << jhon.GetyearsOfService() << endl;
    cout << "Salary: " << jhon.GetSalary() << endl;
    cout << "Approximate Salary: " << jhon.ApproximateSalary() << endl;
    return 0;
}

float Employee::ApproximateSalary()
{
    float truncated = std::round(mSalary / 1000);

    return truncated * 1000;
}

Employee::Employee(int age, int yearsOfService, float salary)
    : mAge(age), mYearsOfService(yearsOfService), mSalary(salary)
{}
