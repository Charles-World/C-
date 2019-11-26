#include <iostream>
#include <time.h>
using namespace std;

//template <class T>
//class SmartPtr
//{
//public:
//	SmarPtr(T* ptr)
//		:_ptr(ptr)
//	{}
//	~SmarPtr(T* ptr)
//	{
//		if(_ptr)
//		delete _ptr;
//	}
//
//	T& operator *()
//	{
//		return *ptr;
//	}
//
//	T& operator ->()
//	{
//		return _ptr;
//	}
//
//	//SmartPtr(SmartPtr&())
//	SmartPtr& operator =()
//private:
//	T* _ptr;
//};
//
//struct Date
//{
//	int _year;
//	int _month;
//	int _day;
//};
//
////int main()
////{
////	SmartPtr<Date> sp(new Date);
////	sp->_day = 29;
////	sp.oprator->()->_year = 2019;
////	(*sp)._month = 1;
////	sp.operator*()._month = 2;
////
////	return 0;
////}
//
//int main()
//{
//	unique_ptr<Date> up(new Date);
//	//unique_ptr<Date> up2(up);
//	unique_ptr<Date> up3(new Date);
//	shared_ptr<Date> sp(new Date);
//}


int main()
{
	long t = 0;
	t = time(nullptr);
	printf("µ±Ç°ÃëÊý£º%d\n", t);

	//srand(time(nullptr));
	t = t % 50;
	printf("%d\n", t);

	system("pause");
	return 0;
}