#include <iostream>
using namespace std;
int printMonthCalendar(int numOfDays, int startingDay);
bool isLeapYear(int year);
void printYearCalendar(int year, int startingDay);
int main()
{
	int numOfDays, startingDay, year;
	cout << "Please enter number of days and starting day, separated by a space:" << endl;
	cin >> numOfDays >> startingDay;
	
	printMonthCalendar(numOfDays, startingDay);
	cout << endl <<"Please enter a year and a starting day, separated by a space:";
	cin >> year >> startingDay;
	printYearCalendar(year, startingDay);
	

	
	 













	return 0;
}
int printMonthCalendar(int numOfDays, int startingDay)
{
	cout << "Mon\t" << "Tue\t" << "Wed\t" << "Thr\t" << "Fri\t" << "Sat\t" << "Sun" << endl;
	int numOfSpaces = 7-startingDay;
	//cout << numOfSpaces;
	int count = 1, counter=0;
	int day = 0;
	while (count<startingDay)
	{
	
			cout << " \t";
			count++;
		}
	
	while (count >= startingDay && count + counter <= 7)
	{
		day++;
		cout << day << "\t";
		counter++;
		
		

	}
	

int line = 0;
//cout << "Num Of Days:" << numOfDays;
while (day < numOfDays && line < 6)
{
	
	//cout << "Line:" << line;
	//cout << "Day:" << day;

	cout << endl;

	
	counter = 0;
	while (counter < 7 && day<numOfDays)
		{
		counter++;
		day++;
		
		cout << day << "\t";

			}
	line++;
	
}
	

		return counter;
}

	bool isLeapYear(int year)
	{
		
		if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
		{
			return true;
		}
		else return false;

}
	void printYearCalendar(int year, int startingDay)
	{
		
		int counter;
		int numOfDays=31;
		for (counter = 1; counter <= 12; counter++)
		{
			if (counter == 1)
			{
				cout << "January"<<endl;
				numOfDays = 31;
			}
			if ((counter == 2) && (isLeapYear(year)))
			{
				cout << "February" << endl;
				numOfDays = 29;
				startingDay = 1;
			}
			else if ((counter == 2))
			{
				cout << "February" << endl;
				numOfDays = 28;
				startingDay = 1;

			}
			if (counter == 3)
			{
				cout << "March" <<endl;
				numOfDays = 31;
				startingDay = 2;
			}
			if (counter == 4)
			{
				cout << "April" << endl;
				numOfDays = 30;
				startingDay = 5;
			}
			if (counter == 5)
			{
				cout << "May" << endl;
				numOfDays = 31;
				startingDay = 7;
			}
			if (counter == 6)
			{
				cout << "June" << endl;
				numOfDays = 30;
				startingDay = 3;
			}
			if (counter == 7)
			{
				cout << "July" << endl;
				numOfDays = 31;
				startingDay = 5;
			}
			if (counter == 8)
			{
				cout << "August" << endl;
				numOfDays = 31;
				startingDay = 1;
			}
			if (counter == 9)
			{
				cout << "September" << endl;
				numOfDays = 30;
				startingDay = 4;
			}
			if (counter == 10)
			{
				cout << "October" << endl;
				numOfDays = 31;
				startingDay = 6;
			}
			if (counter == 11)
			{
				cout << "November" << endl;
				numOfDays = 30;
				startingDay = 2;
			}
			if (counter == 12)
			{
				cout << "December" << endl;
				numOfDays = 31;
				startingDay = 4;
			}
			printMonthCalendar(numOfDays,startingDay);
			cout << endl;
		}




	}