#include <iostream>

using namespace std;
const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student * ps);

void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while(cin.get() != '\n')
		continue;
	
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < class_size; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	
	return 0;
}

int getinfo(student pa[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout << "Enter #" << (i+1) << " student's fullname: ";
		cin.getline(pa[i].fullname, SLEN);
		cout << "Enter #" << (i+1) << " student's hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enter #" << (i+1) << " student's ooplevel: ";
		(cin >> pa[i].ooplevel).get();
	}
	return i;
}

void display1(student st)
{
	cout << "Student's fullname: " << st.fullname << endl;
	cout << "Student's hobby: " << st.hobby << endl;
	cout << "Student's ooplevel: " << st.ooplevel << endl;
}


void display2(const student * st)
{
	cout << "Student's fullname: " << st->fullname << endl;
	cout << "Student's hobby: " << st->hobby << endl;
	cout << "Student's ooplevel: " << st->ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Student #" << (i+1) << " fullname: " << pa[i].fullname << endl;
		cout << "Student #" << (i+1) << " hobby: " << pa[i].hobby << endl;
		cout << "Student #" << (i+1) << " ooplevel: " << pa[i].ooplevel << endl;
	}
}