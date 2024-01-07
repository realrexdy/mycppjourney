#include<iostream>
#include<string>
#include<vector>
using std::cin, std::cout, std::vector, std::string;

class user{
	private:
		string password;
	public:
		string username;
		int followers;
		int following;
		int posts;
	user(){
		cout << "\nEnter a Username: ";
		cin >> username;
		cout << "\nPassword: ";
		cin >> password;
		followers=0;
		following=0;
		posts=0;
	}
	~user(){
	}
};

int main(){
	char inp;
	do{
		cout << "1. Login\n";
		cout << "2. Signup\n";
		cout << "\nq to quit\n";
		cin >> inp;
	}while(inp!='1' || inp!='2' || inp!='q' || inp!='Q');
	switch (inp)
	{
	case '1':
		break;
	case '2':
		user();
		break;
	default:
		exit(0);
		break;
	}
}
