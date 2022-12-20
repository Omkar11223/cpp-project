#include<iostream>
using namespace std;
class employee
{
	protected:
		int eid;
		string ename;
	public:
	    void accept()
	    {
	    	cout<<"\n enter eid";
	    	cin>>eid;
	    	cout<<"\n enter ename";
	    	cin>>ename;
		}
		void display()
		{
			cout<<"\n eid"<<eid;
			cout<<"\n ename"<<ename;
		}
};
class worker:public employee
{
	void get()
	{
	
	protected:
		float overtimesalary
	public:
		cout<<"\n enter overtimesalary";
		cin>>overtimesalary
	}
	void put()
	{
		cout<<"\n overtimesalary"<<overtimesalary;
	}
};
class manager:public employeee
{
	protected:
		float additional_allowance;
	public:
		void getdata()
		{
			cout<<"\n enter additional_allowance";
			cin>>adiitional_allowance;
		}
		void putdata()
		{
			cout<<"\n additional_allowance"<<additional-allowance;
		}
};
main()
{
	worker w1;
	w1.accept();
	w1.display();
	w1.get();
    w1.put();
    manager m1();
    m1.accept();
    m1.display();
    m1.getdata();
    m1.putdata();
    
}


