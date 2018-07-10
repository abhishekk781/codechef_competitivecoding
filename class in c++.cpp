#include<bits/stdc++.h>
using namespace std;

class student
{
	int rollno;          // private mdata members
	int marks;
	string name;
public:
	void insert_data(int x,int y,string z)
	{
		rollno=x;
		marks=y;
		name=z;
	}
	int get_rollno(){ return rollno; }
	int get_marks(){ return marks; }
	string get_name(){ return name; }
};
int main()
{
	student x;  // object of class
	x.insert_data(1,90,"Abhishek");

	// cout<<x.rollno; // this will give error because rollno is private member

	// cout<<x.get_rollno; // give erore because get_rollno is function, and this is wrong way to call a fuction

	cout<<x.get_rollno()<<endl;
	cout<<x.get_marks()<<endl;
	cout<<x.get_name()<<endl; 

	return 0;
}