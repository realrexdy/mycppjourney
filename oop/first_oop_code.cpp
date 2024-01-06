#include <iostream>
using std::cin, std::cout;
using std::cout, std::cin, std::string;

class student{
public:
	std::string  name;
	std::string  USN;
	student(const std::string stuname, const std::string stuUSN){
		name = stuname;
		USN = stuUSN;
	}
};

int main(){
	string stuname, stuusn;
	cout << "Enter the Name of the Student:";
    cin >> stuname;
    cout << "Enter the USN of the Student:";
    cin >> stuusn;

    student s1(stuname, stuusn);

    cout << "\n Name of the student is = " << s1.name;
    cout << "\n USN of the student is = " << s1.USN << "\n";
	return 0;
}