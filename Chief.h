#include<iostream>
#include "Emploee.h"
#ifndef CHIEF
#define CHIEF
class Chief :public Emploee
{
protected:
	double earnings;
	string cookery;
public:
	Chief(string name, long EmploeeID, char EmploeeClass, double salary, double
		earnings, string cookery);
	void Show(ostream& out) const;
	void Calc_salary();
};
inline Chief::Chief(string name, long EmploeeID, char EmploeeClass, double salary,
	double earnings, string cookery)
	:Emploee(name, EmploeeID, EmploeeClass, salary), earnings(earnings),
	cookery(cookery)
{}
inline void Chief::Calc_salary() {
	if (earnings > 0) {
		salary += earnings * 0.2;
	}
}
inline void Chief::Show(ostream& out)const {
	Emploee::Show(out);
	(earnings > 0) ? out << "earnings : " << earnings : out << "There is no earnings in this month";
	out << "\nwhole salary : " << salary << "\ncookery : " << cookery << endl;
}
#endif
