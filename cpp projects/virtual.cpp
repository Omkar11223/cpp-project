#include<iostream>
using namespace std;
class base
{
	public:
		virtual void display()
		{
			cout<<"\ it is base class";
			
		}
};
class dirived:public base
{
	public:
		void display()
		{
			
		}
};
main()
{
	base*bptr;
	base b;
	derived d;
	
	
	bptr=&b;
	bptr->display();
	
	
	bptr=&d;
	bptr->display();
}
