#include<iostream>
using namespace std;
class test
{
	public:
		int code;
		static int count;
		
		void setcode()
		{
			code=count++;
			
		}
		void showcode()
		{
			cout<<"\n code="<<code;
		}
		static void showcount()
		{
			cout<<"\n count="<<count;
		}0
};
int test ::count=0;
main()
{
	test t1;
	test t2;
	t1.setcode();
	t1.showcode();
	t2.setcode();
	t2.showcode();
	test :: showcount();
	test t3;
	t3.setcode();
	test :: showcount();
}
