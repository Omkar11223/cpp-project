#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		string name;
	public:
		void accept()
		{
			cout<<"\n enter rollno=";
			cin>>rollno;
			cout<<"\n enter name=";
			cin>>name;
		}
		void display()
		{
			cout<<"\n rollno"<<rollno;
			cout<<"\n name"<<name;
		}
};
class test:public student
{
	protected:
		float part1,part2;
	public:
		void get()
		{
			cout<<"\n enter part1=";
			cin>>part1;
			cout<<"\n enter part2=";
			cin>>part2;
		}
		void put()
		{
			cout<<"\n part1"<<part1;
			cout<<"\n part2"<<part2;
		}
};
class sport
{
	protected:
		float score;
	public:
		void getdata()
		{
			cout<<"\n enter score=";
			cin>>score;
		}
		void putdata()
		{
			cout<<"\n score"<<score;
		}
};
class result:public test ,public sport
{
	protected:
		float total;
	public:
		void displaydata()
		{
			total=part1+part2+score;
			cout<<"\n enter total="<<total;
		}
	
};
main()
{
	result r1;
	r1.accept();
	r1.display();
	r1.get();
	r1.put();
	r1.getdata();
	r1.putdata();
	r1.displaydata();
}
