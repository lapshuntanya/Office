#pragma once
#include "Employee.h"
class Staff:public Employee
{
protected:
	float bonus;
public:
	Staff();
	Staff(string name, string position, float salary, float bonus);

	virtual void show()const override;
	virtual float calcSalary()const override;
};

