#include <iostream>

using namespace std;
class Date
{
public:
	Date(int year = 1990, int month = 1, int day = 1)
	{
		if (year < 0 || month <= 0 || month > 12 || day <= 0 || day > GetDay(year, month))
		{
			cout << "日期时间错误，已自动更正为默认时间：1990-1-1" << endl;
			_year = 1990;
			_month = 1;
			_day = 1;
		}

		_year = year;
		_month = month;
		_day = day;
	}

	int GetDay(int year, int month)
	{
		int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		
		int day = days[month - 1];
		if (month == 2)
		{
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				++day;
			}
		}
		return day;
	}

	Date& operator += (int day)
	{
		if (day < 0)
		{
			return *this -= -day;
		}

		_day += day;
		if (_day > GetDay(_year, _month))
		{
			_day -= GetDay(_year, _month);
			++_month;
			if (_month >= 12)
			{
				_month = 1;
				++_year;
			}
		}
		return *this; 
	}
	Date& operator -= (int day)
{
		if (day < 0)
		{
			return *this += -day;
		}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month <= 0)
		{
			_month = 12;
			--_year;
		}

		_day += GetDay(_year, _month);
	}
	return *this;
}

	Date operator + (int days)
	{
		Date ret(*this);
		ret += days;
		return ret;
	}

	Date operator - (int days)
	{
		Date ret(*this);
		ret -= days;
		return ret;
	}

	Date& operator ++ ()
	{
		return *this += 1;
	}

	Date operator ++(int)
	{
		Date ret(*this);
		*this += 1;
		return ret;
	}

	Date & operator -- ()
	{
		return *this -= 1;
	}

	Date operator -- (int)
	{
		Date ret(*this);
		*this -= 1;
		return ret;
	}

	bool operator < (const Date& d)const
	{
		if (_year > d._year)
		{
			return false;
		}
		else if (_year == d._year)
		{
			if (_month > d._month)
			{
				return false;
			}
			else if (_month == d._month)
			{
				if (_day > d._day)
				{
					return false;
				}
			}
		}
		return true;
	}

	bool operator > (const Date& d)const
	{
		if (_year > d._year)
		{
			return true;
		}
		else if (_year == d._year)
		{
			if (_month > d._month)
			{
				return true;
			}
			else if (_month == d._month)
			{
				if (_day > d._day)
				{
					return true;
				}
			}
		}
		return false;
	}

	bool operator == (const Date& d)const
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	bool operator >= (const Date& d)const
	{
		return (*this > d) || (*this == d);
	}

	bool operator <= (const Date& d)const
	{
		return (*this < d) || (*this == d);
	}

	int operator - (const Date& d)const
	{
		Date d1(*this);
		Date d2(d);
		int day = 0;
		int flag = 0;
		/*if (d1 > d2)
		{
			while (d1 > d2)
			{
				--d1;
				++day;
			}
			return day;
		}
		else
		{
			while (d1 < d2)
			{
				++d1;
				++day;
			}
			return -day;
		}*/
		if (d1 < d2)
		{
			d1 = d2;
			d2 = *this;
		    flag = -1;
		}

		while (d1 > d2)
		{
			--d1;
			++day;
		}

		return day * flag;
	}

	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2018, 1, 1);
	d1 += 33;
	d1.Display();
	d1 -= 33;
	d1.Display();

	system("pause");
	return 0;
}