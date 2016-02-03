#include <iostream>
#include <string>
using namespace std;

struct StudentType
{
	string name;
	int ID;
	float GPA;
	string address;
};

void initRecords(StudentType stus[], int len)
{
	for (int i = 0; i < len; i++)
	{
		stus[i].ID = 0;

	}
}

int main(int argc, char* argv[])
{
	StudentType stu1 = { "John Smith", 1, 3.5, "strreet 1 GJ" };
	StudentType stu2;
	stu2.ID = 20;
	stu2.GPA = 4.0;
	stu2.name = "Jane Doe";
	stu2.address = "some address";
	StudentType students[50];
	initRecords(students, 50);
	cin.get();
	return 0;
}

