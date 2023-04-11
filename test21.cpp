#include<iostream>
using namespace std;

class Parent
{
public:
	Parent()
	{
		cout << "Parentgou" << endl;
	}
	virtual ~Parent()
	{
		cout << "Parentxi" << endl;
	}
    void func(){
        cout<<"Parent func"<<endl;
    }
};

class Son :public Parent
{
public:
	Son()
	{
		cout << "Songou" << endl;
	}
	~Son()
	{
		cout << "Sonxi" << endl;
	}
    void func(){
        cout<<"zit func"<<endl;
    }
};


int main()
{
	Parent *p = new Son;
    p->func();
    delete p;
	system("pause");
	return 0;
}
