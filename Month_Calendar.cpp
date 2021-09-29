/*
Victoria Barkley
CS231-002
Monthly Calendar
Programming Lab Assignment 5
This program uses a function in order to print out 
an individual calendar month. It accounts for the 
month, the start date, and whether or not it is a
leap year. 
March 8th, 2021
*/

#include <iostream>
#include <string>
using namespace std;

// This is the function
void printmonth(const int month, const int startday, const bool leapyear) {

	// This defigns and assigns variables that we will need later
	int weekmodulo = 0;
	int j = 0;


	// this section checks the month and the days for the month
	const string MonthArray[13] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	// Remember, MonthArray[0] is empty string
	int MonthDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	// Remember, MonthDays[0] is empty


	// this section checks if it is a leapyear and assigns the days for February
	if (MonthDays[2] && leapyear == true) {
		j = 29;
	}
	else {
		j = MonthDays[month];
	}


	// this part arranges the month and the week days for the calendar
	cout << "	 " << MonthArray[month] << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;


	// This for loop builds the calendar
	for (int dayCounter = 1; dayCounter <= j; dayCounter++) {
		// this section checks if the start day is Sunday
		if (startday == 0) {
			if (dayCounter < 10) {
				cout << "  " << dayCounter << " ";
			}
			if (dayCounter > 9) {
				cout << " " << dayCounter << " ";
			}
			if ((dayCounter % 7) == 0) {
				cout << "\n";
				weekmodulo += 1;
			}
		}
		

		// this section checks if the start day is Monday
		if (startday == 1) {
			if ((weekmodulo == 0) && (dayCounter == 1)) {
				cout << "      " << dayCounter << " ";
			}
			else {
				if (dayCounter < 10) {
					cout << "  " << dayCounter << " ";
				}
				if (dayCounter > 9) {
					cout << " " << dayCounter << " ";
				}
			}
			if ((dayCounter % 7) == 6) {
				cout << "\n";
				weekmodulo += 1;
			}
		}


		// this section checks if the start day is Tuesday
		if (startday == 2) {
			if ((weekmodulo == 0) && (dayCounter == 1)) {
				cout << "          " << dayCounter << " ";
			}
			else {
				if (dayCounter < 10) {
					cout << "  " << dayCounter << " ";
				}
				if (dayCounter > 9) {
					cout << " " << dayCounter << " ";
				}
			}
			if ((dayCounter % 7) == 5) {
				cout << "\n";
				weekmodulo += 1;
			}
		}
		
	
		// this section checks if the start day is Wednesday
		if (startday == 3) {
			if ((weekmodulo == 0) && (dayCounter == 1)) {
				cout << "              " << dayCounter << " ";
			}
			else {
				if (dayCounter < 10) {
					cout << "  " << dayCounter << " ";
				}
				if (dayCounter > 9) {
					cout << " " << dayCounter << " ";
				}
			}
			if ((dayCounter % 7) == 4) {
				cout << "\n";
				weekmodulo += 1;
			}
		}


		// this section checks if the start day is Thursday
		if (startday == 4) {
			if ((weekmodulo == 0) && (dayCounter == 1)) {
				cout << "                  " << dayCounter << " ";
			}
			else {
				if (dayCounter < 10) {
					cout << "  " << dayCounter << " ";
				}
				if (dayCounter > 9) {
					cout << " " << dayCounter << " ";
				}
			}
			if ((dayCounter % 7) == 3) {
				cout << "\n";
				weekmodulo += 1;
			}
		}


		// this section checks if the start day is Friday
		if (startday == 5) {
			if ((weekmodulo == 0) && (dayCounter == 1)) {
				cout << "                      " << dayCounter << " ";
			}
			else {
				if (dayCounter < 10) {
					cout << "  " << dayCounter << " ";
				}
				if (dayCounter > 9) {
					cout << " " << dayCounter << " ";
				}
			}
			if ((dayCounter % 7) == 2) {
				cout << "\n";
				weekmodulo += 1;
			}
		}


		// this section checks if the start day is Saturday
		if (startday == 6) {
			if ((weekmodulo == 0) && (dayCounter == 1)) {
				cout << "                          " << dayCounter << " ";
			}
			else {
				if (dayCounter < 10) {
					cout << "  " << dayCounter << " ";
				}
				if (dayCounter > 9) {
					cout << " " << dayCounter << " ";
				}
			}
			if ((dayCounter % 7) == 1) {
				cout << "\n";
				weekmodulo += 1;
			}
		}


		// This section checks if it is the last day and starts a new line
		if (dayCounter == j) {
			cout << "\n";
		}
	}

}

int main() {
	// These are examples
	printmonth(1, 0, false);	// Print January 1st, on a Sunday
	printmonth(2, 1, true);		// Print February 1st leap year, starts Monday
	printmonth(1, 2, false);	// Print January 1st, on a Tuesday
	printmonth(2, 3, false);	// Print February 1st not leap year, starts Wednesday
	printmonth(1, 4, false);	// Print January 1st, on a Thursday
	printmonth(2, 5, false);	// Print February 1st, on a Friday
	printmonth(1, 6, false);	// Print January 1st, on a Saturday
	printmonth(6, 1, false);	// Print June 1st, on Monday
	printmonth(12, 4, false);	// Print December 12th, on a Thursday
	return 0;
}