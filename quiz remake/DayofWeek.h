#pragma once
class DayofWeek
{
	private:
		int day, month, year;
		string dayofweek;

	public:
		DayofWeek();
		DayofWeek(int day, int month, int year);
		~DayofWeek();

		void setDay(int day);
		int getDay();
		void setMonth(int month);
		int getMonth();
		void setYear(int year);
		int getYear();
		void setDayofWeek(string dayofweek);
		string getDayofWeek();

		int CalculatetheDayofWeek(int day, int month, int year);
};

