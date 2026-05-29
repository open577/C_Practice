#include<iostream>
#include<string>
#include<vector>
#include<initializer_list>
using namespace std;
class Boy;
class Girl;

class Boy
{
public:
	friend class Girl;
	Boy(string name, int age)
		:_name(name)
		, _age(age)
	{
	}


	~Boy()
	{
		_name = "";
		_age = 0;
	}

	friend ostream& operator<<(ostream& out, const Boy& a);
private:
	string _name;
	int _age;
};

class Girl
{
public:
	Girl(string name, int age)
		:_name(name)
		, _age(age)
	{
	}


	~Girl()
	{
		_name = "";
		_age = 0;
	}

	friend ostream& operator<<(ostream& out, const Girl& a);

	void VisitBoy(const Boy& a)
	{
		cout << a._name << " " << a._age << endl;
	}
private:
	string _name;
	int _age;
};

ostream& operator<<(ostream& out, const Boy& a)
{
	out << a._name << " " << a._age << endl;
	return out;
}

ostream& operator<<(ostream& out, const Girl& a)
{
	out << a._name << " " << a._age << endl;
	return out;

}


class Student
{

public:
	Student(string num, float grade)
		:_num(num)
		, _grade(grade)
	{
	}
public:
	friend ostream& operator<<(ostream& out, const Student& a);
private:
	string _num;
	float _grade;
};

ostream& operator<<(ostream& out, const Student& a)
{
	out << a._num << " " << a._grade << endl;
	return out;

}

int main()
{
	Boy a("222", 1);
	Girl b("111", 2);
	b.VisitBoy(a);

	Student st[5] = { {"111",100},{"222",200},{"333",300},{"444",400},{"555",500} };
	cout << st[0] << endl << st[2] << endl << st[4] << endl;
	return 0;
}