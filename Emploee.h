#include <iostream>
#include <string>
using namespace std;
#ifndef EMPLOEE
#define EMPLOEE


class Emploee {
	protected:
		string name;
		long EmploeeID;
		char EmploeeClass;
		double salary;
	public:
		Emploee(string n, long EmploeeID, char EmploeeClass, double salary);
		virtual void Show(ostream& out) const;
		virtual void Calc_salary();
		Emploee();
};

inline Emploee::Emploee(){}

inline void Emploee::Calc_salary(){}

inline Emploee::Emploee(string name, long EmploeeID, char EmploeeClass, double salary)
	:name(name), EmploeeID(EmploeeID), EmploeeClass(EmploeeClass), salary(salary)
{}
inline ostream& operator<<(ostream& out, const Emploee& Emploee) {
	Emploee.Show(out);
	return out;
}
inline void Emploee::Show(ostream& out) const {
	out << "Name : " << name << "\nEmploee ID : " << EmploeeID << "\nEmploee Class: " << EmploeeClass << endl;
}
#endif
