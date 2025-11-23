#include <iostream>
using namespace std;

class Roomate{
	public:
string Name;
string Company;
int IdNumber;
int Age;
float Salary;	


void ShowRoommateDetails(){
cout<<"  Name -     "<<Name<<endl;
cout<<"  Company -  "<< Company<<endl;
cout<<"  IdNumber - "<<IdNumber<<endl;
cout<<"  Age  -      "<<Age<<endl;
cout<<"  Salary -   "<<Salary<<endl;

}	
};

int main(){
	Roomate Roomate;
	Roomate.Name = " Kevin Ochieng ";
	Roomate.Company =" JKUATES ";
    Roomate.IdNumber = 42526737;
	Roomate.Age = 34;
	Roomate.Salary = 12135.33;
	Roomate.ShowRoommateDetails();


	return 0;
}
