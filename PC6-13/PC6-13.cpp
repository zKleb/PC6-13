// Caleb Redeker
// Beginning Programming
// Professor Goulden

#include <iostream>
#include <iomanip>
using namespace std;


int employeeCount();
int missedDays(int&);
double averageDays(int, int);

int main() {
	int numOfEmployees = 0;

	employeeCount();
	missedDays(numOfEmployees);

}

int employeeCount() {
	int count;

	cout << "Number of Employees: ";
	cin >> count;

	while (count < 1) {
		cout << "Invalid count. Input an integer greater than 0." << endl;
		cout << endl;
		cout << "Number of Employees: ";
		cin >> count;
	}
	return count;
}

int missedDays(int&) {



}

double averageDays(int x, int y) {



}