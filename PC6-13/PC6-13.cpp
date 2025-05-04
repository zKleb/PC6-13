// Caleb Redeker
// Beginning Programming
// Professor Goulden

#include <iostream>
#include <iomanip>
using namespace std;


int employeeCount();
int missedDays(int&);
double averageDays(int&, int&);

int main() {
	

	int count = employeeCount();
	int daysOutTotal = missedDays(count);
	averageDays(count, daysOutTotal);

}

int employeeCount() {
	double count;

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

int missedDays(int& count) {
	int daysOut = 0, daysOutTotal = 0;
	
	for (int i = 0; i < count; i++) {
		cout << "Days out for employee " << i+1 << ":" << endl;
		cin >> daysOut;
		while (daysOut < 0) {
			cout << "Invalid input. Input an integer of zero or greater." << endl;
			cout << "Days out for employee " << i + 1 << ":" << endl;
			cin >> daysOut;
		}
		
		daysOutTotal += daysOut;
		
	}
	return daysOutTotal;
}

double averageDays(int& count, int& daysOutTotal) {
	double theAverage = 0;
	theAverage = static_cast<double>(daysOutTotal) / static_cast<double>(count);

	cout << "The average number of days missed is " << fixed << setprecision(2) << showpoint << theAverage << endl;
	return theAverage;
}