#include<iostream>
using namespace std;
//double Divide(int a, int b)
//{
//	// 当b == 0时抛出异常
//	if (b == 0)
//	{
//		throw "Divide by zero condition!";
//	}
//	else
//	{
//		return (double)a / (double)b;
//	}
//}
//void Func()
//{
//	// 这⾥可以看到如果发⽣除0错误抛出异常，另外下⾯的array和array2没有得到释放。
//	// 所以这⾥捕获异常后并不处理异常，异常还是交给外⾯处理，这⾥捕获了再重新抛出去。
//	// 但是如果array2new的时候抛异常呢，就还需要套⼀层捕获释放逻辑，这⾥更好解决⽅案
//	// 是智能指针，否则代码太戳了
//	int* array1 = new int[10];
//	int* array2 = new int[10]; // 抛异常呢
//	try
//	{
//		int len, time;
//		cin >> len >> time;
//		cout << Divide(len, time) << endl;
//	}
//	catch (...)
//	{
//		cout << "delete []" << array1 << endl;
//		cout << "delete []" << array2 << endl;
//		
//		delete[] array1;
//		delete[] array2;
//		throw; // 异常重新抛出，捕获到什么抛出什么
//	}
//	// ...
//	cout << "delete []" << array1 << endl;
//	delete[] array1;
//	cout << "delete []" << array2 << endl;
//	delete[] array2;
//}
//int main()
//{
//	try
//	{
//		Func();
//	}
//	catch (const char* errmsg)
//	{
//		cout << errmsg << endl;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "未知异常" << endl;
//	}
//	return 0;
//}

//template<class T>
//class SmartPtr
//{
//public:
//	// RAII
//	SmartPtr(T* ptr)
//		:_ptr(ptr)
//	{
//	}
//	~SmartPtr()
//	{
//		cout << "delete[] " << _ptr << endl;
//		delete[] _ptr;
//	}
//	// 重载运算符，模拟指针的⾏为，⽅便访问资源
//	T& operator*()
//	{
//		return *_ptr;
//	}
//	T* operator->()
//	{
//		return _ptr;
//	}
//	T& operator[](size_t i)
//	{
//		return _ptr[i];
//	}
//private:
//	T* _ptr;
//};
//
//int main()
//{
//
//
//	return 0;
//}

struct Date
{
	int _year;
	int _month;
	int _day;
	Date(int year = 1, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
	~Date()
	{
		cout << "~Date()" << endl;
	}
};


//int main()
//{
//	//auto_ptr<Date> ap1(new Date);
//	//// 拷⻉时，管理权限转移，被拷⻉对象ap1悬空
//	//auto_ptr<Date> ap2(ap1);
//	//// 空指针访问，ap1对象已经悬空
//	//ap1->_year++;
//
//
//	unique_ptr<Date> up1(new Date);
//	// 不⽀持拷⻉
//	//unique_ptr<Date> up2(up1);
//	// ⽀持移动，但是移动后up1也悬空，所以使⽤移动要谨慎
//	unique_ptr<Date> up3(move(up1));
//
//
//	shared_ptr<Date> sp1(new Date);
//	// ⽀持拷⻉
//	shared_ptr<Date> sp2(sp1);
//	shared_ptr<Date> sp3(sp2);
//	cout << sp1.use_count() << endl;
//	sp1->_year++;
//	cout << sp1->_year << endl;
//	cout << sp2->_year << endl;
//	cout << sp3->_year << endl;
//	// ⽀持移动，但是移动后sp1也悬空，所以使⽤移动要谨慎
//	shared_ptr<Date> sp4(move(sp1));
//	return 0;
//}


//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main() {
//	//// 方式1：直接构造（不推荐，存在异常安全问题）
//	//shared_ptr<int> p1(new int(10));
//
//	//// 方式2：推荐使用 make_shared（更高效、异常安全）
//	//auto p2 = make_shared<int>(20);
//
//	//cout << *p1 << endl;
//	//cout << *p2 << endl;
//
//	auto a1 = make_shared<int>(10);
//	cout << a1.use_count() << endl; // 输出 1，只有 p1 指向它
//
//	auto a2 = a1; // 拷贝构造，共享所有权
//	cout << a1.use_count() << endl; // 输出 2
//	cout << a2.use_count() << endl; // 输出 2
//
//	a1.reset(); // p1 放弃所有权
//	cout << a2.use_count() << endl; // 输出 1
//	return 0;
//}

//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main() {
//	// 方式1：直接构造
//	unique_ptr<int> p1(new int(10));
//
//	// 方式2：推荐使用 make_unique（C++14 起）
//	auto p2 = make_unique<int>(20);
//
//	// 像裸指针一样使用
//	cout << *p1 << endl;
//	cout << *p2 << endl;
//
//	// 自动释放，无需 delete
//	return 0;
//}

//#include <iostream>
//#include <memory>
//using namespace std;
//
//int main() {
//	auto sp = make_shared<int>(10);
//	weak_ptr<int> wp = sp; // 弱引用，不增加计数
//
//	cout << "sp 引用计数：" << sp.use_count() << endl<<endl; // 输出 1
//
//	// 尝试升级为 shared_ptr
//	if (auto p = wp.lock()) {
//		cout << "对象存在，值为：" << *p << endl<<endl;
//		cout << "升级后计数：" << p.use_count() << endl<<endl; // 输出 2
//	}
//	else {
//		cout << "对象已被释放" << endl;
//	}
//
//	return 0;
//}

