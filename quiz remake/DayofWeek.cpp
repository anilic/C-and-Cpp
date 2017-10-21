#include "stdafx.h"
#include "DayofWeek.h"

void DayofWeek::setDay(int day)
{
	this->day = day;
}
int DayofWeek::getDay()
{
	return day;
}

void DayofWeek::setMonth(int month)
{
	this->month = month;
}
int DayofWeek::getMonth()
{
	return month;
}

void DayofWeek::setYear(int year)
{
	this->year = year;
}
int DayofWeek::getYear()
{
	return year;
}

void DayofWeek::setDayofWeek(string dayofweek)
{
	this -> dayofweek = dayofweek;
}
string DayofWeek::getDayofWeek()
{
	return dayofweek;
}

int DayofWeek::CalculatetheDayofWeek(int day, int month, int year)
{
	int temp=((day + (int)((month + 1)*2.6) + year + (int)(year / 4) + 6 * (int)(year / 100) + (int)(year / 400) + 6) % 7);
	return temp;
}

DayofWeek::DayofWeek()
{
	setDay(0);
	setMonth(0);
	setYear(0);
}

DayofWeek::DayofWeek(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);

	int temp=CalculatetheDayofWeek(day, month, year);

	switch (temp)
	{
		case 0:
			setDayofWeek("Sunday");
			break;
		case 1:
			setDayofWeek("Monday");
			break;
		case 2:
			setDayofWeek("Tuesday");
			break;
		case 3:
			setDayofWeek("Wednesday");
			break;
		case 4:
			setDayofWeek("Thursday");
			break;
		case 5:
			setDayofWeek("Friday");
			break;
		case 6:
			setDayofWeek("Saturday");
			break;
	}
}

DayofWeek::~DayofWeek()
{
	cout << "-------------------\nExecution completed.\n-------------------" << endl;
}