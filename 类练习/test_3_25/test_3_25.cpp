#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
//
//template <typename T>
//void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <class T, class T2>
//T Sub(const T& a, const T2& b)
//{
//	return a - b;
//}
//
//template <class T>
//class Date1
//{
//public:
//	Date1(T year = 1900, T month = 1, T day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//
//	//ostream& operator << (ostream& _cout, Date1<int> d)
//	//{
//	//	_cout << d._year << "-" << d.month << "-" << d._day << endl;
//	//	return _cout;
//	//}
//
//	//Date1<int> d;
//
//	//cout << d;
//private:
//	T _year;
//	T _month;
//	T _day;
//};
//
//typedef char DataType;
//struct seqList
//{
//	DataType* _data;
//};
//
////vector<Date1<int>> v4;
//
//
//template <class T>
//class	Vector
//{
//public:
//	Vector(size_t capacity = 20)
//		:_data(new T[20])
//		, _size(0)
//		, _capacity(capacity)
//	{}
//	void PushBack(const T& x)
//	{
//		_data[_size++] = x;
//	}
//
//	~Vector()
//	{
//		if (_data)
//		{
//			delete[] _data;
//			_data = nullptr;
//		}
//
//	}
//
//	size_t Size() const
//	{
//		return _size;
//	}
//
//	Vector operator[](&Vector, i)
//	{
//		a[i] = 10;
//	}
//
//	T& operator[](size_t pos)
//	{
//		assert(pos < _size);
//		return _data[pos];
//	}
//
//	const T& operator[](size_t pos)const
//	{
//		return _data[pos];
//	}
//
//	Vector<T> fun()
//	{
//		Vector<T> a;
//		return a;
//	}
//
//	void Print()
//	{
//		for (int i = 0; i < _size; i++)
//		{
//			cout << _data[i] << " ";
//		}
//		cout << endl;
//	}
//
//private:
//	T * _data;
//	size_t size;
//	size_t _capacity;
//};
//
//template <typename T>
//	void Vector<T>::Print()
//	{}
//	template <typename T>
//	void PrintVector(const Vector<T>& v)
//	{
//		for (int i = 0; i < v.Size(); i++)
//		{
//			cout << v[i] << endl;
//			T a = v[i];
//			v[i] = 10;
//			cout << v.operator[](i) << endl;
//		}
//	}
//
//	class A
//	{
//	public:
//		A fun()
//		{
//			A a;
//			return a;
//		}
//	};
//
//
//int main()
//{
//	char s1[] = "abcde";
//	char s2[] = "比特科技";
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	int sz2 = sizeof(s2) / sizeof(s2[0]);
//
//	for (int i = 0; i < sz; i++)
//	{
//		cout << s1[i] << " ";
//	}
//
//	char s3[9]; 
//	s3[0] = -79;
//	s3[1] = -57;
//	s3[2] = -52;
//	s3[3] = -40;
//	s3[4] = -65;
//	s3[5] = -58;
//	s3[6] = -68;
//	s3[7] = -69;
//	s3[8] = '\0';
//
//	cout << endl;
//
//	for (int i = 0; i < sz2; i++)
//	{
//		cout << s2[i] << " ";
//	}
//
//	//int a = 1, b = 2;
//	//double i = 2, c = 5;
//	//float e = 5, f = 6;
//	//char g = 65, h = 68;
//
//	////Swap(g,h);
//	//float j = Sub(i, a);
//	//cout << j<< g<< " "<< h<< endl;
//
//	system("pause");
//	return 0;
//}

//void Print(const string& s)
//{
//	string::const_iterator scit = s.begin();
//	while (scit != s.end())
//	{
//		//*scit = '10';
//		cout << *scit << endl;
//	}
//}

//int main()
//{
//	string();
//	string s;
//	string s2("hello world");
//	string s3(s2, 0, 5);
//	string s4("bite", 2);
//	string s5(10, 'c');
//
//	s5 = s4;
//	s5 = "bitekeji";
//	s5 = 'd';
//	string::iterator sit = s5.begin();
//	while (sit != s5.end)
//	{
//		cout << *sit << " ";
//		++sit;
//	}
//
//	for (auto& e : s5)
//	{
//		cout << e << " ";
//	}
//
//	string::reverse_iterator srit = s5.rbegin();
//	while (srit != s5.rend())
//	{
//		cout << *srit << " ";
//	}
//
//	vector<int> v1;
//	vector<int>::iterator vit = v1.begin();
//	while (vit != v1.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	list<char> l1;
//	list<char>::iterator lit = l1.begin();
//	while (lit != l1.end())
//	{
//		*lit += 10;
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//

//class Solution
//{
//public:
//	int StrToInt(string str)
//	{
//		int ret = 0;
//		int flag = 1;
//		string::iterator sit = str.begin();
//		while (sit != str.end())
//		{
//			if (*sit == '-' || *sit == '+')
//			{
//				if (*sit == '-')
//					flag = -1;
//			}
//			else if (*sit >= '0' && *sit <= '9')
//			{
//				ret *= 10;
//				ret += *sit - '0';
//			}
//			else
//			{
//				return 0;
//			}
//			++sit;
//		}
//		return ret * flag;
//	}
//};
//
//class Solution
//{
//public:
//	int StrToInt(string str)
//	{
//		int ret = 0;
//		int flag = 1;
//		for (auto& e : str)
//		{
//			if (e == '-' || e == '+')
//			{
//				if (e == '-')
//					flag = -1;
//			}
//			else if (e >= '0' && e <= '9')
//			{
//				ret *= 10;
//				ret += e - '0';
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return ret * flag;
//	}
//};
//
//class Solution
//{
//public:
//	int StrToInt(string str)
//	{
//		int ret = 0;
//		int flag = 1;
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == '-' || str[i] == '+')
//			{
//				if (str[i] == '-')
//					flag = -1;
//			}
//			else if (str[i] >= '0' && str[i] <= '9')
//			{
//				ret *= 10;
//				ret += str[i] - '0';
//			}
//			else
//			{
//				return 0;
//			}
//		}
//		return flag * ret;
//	}
//};


