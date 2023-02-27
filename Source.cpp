#include <iostream>
#include<list>
#include "Emploee.h"
#include "Owner.h"
#include "Chief.h"
#include "Waiter.h"
using namespace std;
int main() {
	for (int i = 0; i < 3; i++) {
		double earnings, tip1, tip2, tip3;
		cout << "\nInput a monthly earnings : ";
		cin >> earnings;
		cout << "\nTip for the first waiter : ";
		cin >> tip1;
		cout << "\nTip for the second waiter : ";
		cin >> tip2;
		cout << "\nTip for the third waiter : ";
		cin >> tip3;
		Emploee* myPtr;
		list<Emploee*> myList;
		myPtr = new Owner("Levan Gogaladze", 877456123, 'O', 15000, earnings);
		myPtr->Calc_salary();
		myList.push_back(myPtr);
		myPtr = new Chief("Anthony Bourdain", 744855165, 'C', 10000, earnings, "Spanish");
		myPtr->Calc_salary();
		myList.push_back(myPtr);
		myPtr = new Chief("Paul Bocuse", 555987744, 'C', 10000, earnings, "french");
		myPtr->Calc_salary();
		myList.push_back(myPtr);
		myPtr = new Waiter("Adrianne Curry", 12034556, 'W', 6000, tip1, 4);
		myPtr->Calc_salary();
		myList.push_back(myPtr);
		myPtr = new Waiter("Madelaine Petsch", 558974522, 'W', 6000, tip2, 5);
		myPtr->Calc_salary();
		myList.push_back(myPtr);
		myPtr = new Waiter("Chris Rock", 28976173, 'W', 6000, tip3, 2.5);
		myPtr->Calc_salary();
		myList.push_back(myPtr);
		for (list<Emploee*>::iterator it = myList.begin(); it != myList.end();
			it++) {
			myPtr = *it;
			cout << *myPtr << endl;
		}
	}
}
