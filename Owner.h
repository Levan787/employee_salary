#include<iostream>
#include "Emploee.h"
#ifndef OWNER
#define OWNER
class Owner : public Emploee {
protected:
	double earnings;
public:
	Owner(string name, long EmploeeID, char EmploeeClass, double salary, double
		earnings);
	void Show(ostream& out) const;
	void Calc_salary();
};
inline Owner::Owner(string name, long EmploeeID, char EmploeeClass, double salary,
	double earnings)
	:Emploee(name, EmploeeID, EmploeeClass, salary), earnings(earnings)
{}
inline void Owner::Calc_salary() {
	if (earnings > 0) {
		salary += earnings * 0.6;
	}
}
inline void Owner::Show(ostream& out)const {
	Emploee::Show(out);
	(earnings > 0) ? out << "earnings : " << earnings : out << "There is no earnings in this month";
	out << "\nwhole salary : " << salary << endl;
}
#endif
