#include<iostream>
using namespace std;
class student
{
	public:
		
		static int count;
		void get()
		{
			count++;
			cout<<"\n count ="<<count;
		}
};
main()
{
	student s1;
	student s2;
	student s3;
	s1.get();
	s2.get();
	s3.get();
}
