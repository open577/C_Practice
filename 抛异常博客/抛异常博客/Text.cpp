#include <iostream>
#include <string>
using namespace std;
//
//int main() {
//    try 
//    {
//        // 1. 主动抛出一个异常
//        throw "这是一个异常！";
//
//        // 抛出异常后，本行及之后代码不会执行
//        cout << "我不会被执行" << endl;
//    }
//    catch (const char* err)
//    {
//        // 2. 捕获异常并处理
//        cout << "捕获到异常：" << err << endl;
//    }
//
//    // 3. 程序继续正常运行
//    cout << "程序继续运行～" << endl;
//    return 0;
//}

//double Divide(int a, int b)
//{
//	try
//	{
//		// 当b == 0时抛出异常
//		if (b == 0)
//		{
//			string s("Divide by zero condition!");
//			throw s;
//		}
//		else
//		{
//			return ((double)a / (double)b);
//		}
//	}
//	catch (int errid)
//	{
//		cout << errid << endl;
//	}
//	return 0;
//}
//void Func()
//{
//	int len, time;
//	cin >> len >> time;
//	try
//	{
//		cout << Divide(len, time) << endl;
//	}
//	catch (const char* errmsg)
//	{
//		cout << errmsg << endl;
//	}
//	cout << __FUNCTION__ << ":" << __LINE__ << "行执行" << endl;
//}
//int main()
//{
//	while (1)
//	{
//		try
//		{
//			Func();
//		}
//		catch (const char* errmsg)
//		{
//			cout << errmsg << endl;
//		}
//
//		catch (...)
//		{
//			cout << "unknown error" << endl;
//		}
//	}
//	
//	return 0;
//}


#include <stdexcept>


void func() {
    // 抛出一个标准异常
    throw runtime_error("func 发生错误！");
}

void middleFunc() {
    try {
        func();
    }
    catch (const exception& e) {
        cout << "[中间层捕获] 记录异常：" << e.what() << endl;

        // 重新抛出！
        //throw;
    }
}

int main() {
    try {
        middleFunc();
    }
    catch (const exception& e) {
        cout << "[顶层捕获] 最终处理：" << e.what() << endl;
    }

    cout << "程序正常结束" << endl;
    return 0;
}