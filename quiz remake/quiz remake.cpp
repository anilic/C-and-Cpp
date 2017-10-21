// quiz remake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DayofWeek.h"

int main()
{
	int day, month, year;

	cout << "Please enter the date: "; cin >> day >> month >> year;
	
	DayofWeek date(day, month, year);
	
	cout << "The day that you are looking for is: " << date.getDayofWeek() << endl;

    return 0;
}

