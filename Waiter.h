#include<iostream>
#include "Emploee.h"
#ifndef WAITER
#define WAITER
class Waiter :public Emploee
{
protected:
	double tip;
	double years;
public:
	Waiter(string name, long EmploeeID, char EmploeeClass, double salary, double
		tip, double years);
	void Show(ostream& out) const;
	void Calc_salary();
};
inline Waiter::Waiter(string name, long EmploeeID, char EmploeeClass, double salary,double tip, double years)
{
	Emploee(name, EmploeeID, EmploeeClass, salary);
	tip = tip;
	years =years;	
}
inline void Waiter::Calc_salary() {
	salary += tip;
}
inline void Waiter::Show(ostream& out)const {
	Emploee::Show(out);
	(tip > 0) ? out << "tips : " << tip : out << "There is no tips in this month";
	out << "\nwhole salary : " << salary << "\nWorked years : " << years << endl;
}
#endif
