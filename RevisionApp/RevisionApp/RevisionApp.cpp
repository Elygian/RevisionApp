#include <iostream>
#include <string>

using namespace std;

class Account {

private:
	string name;
	int balance;

public:
	Account(string cname) :
		name(cname), balance(0) {}

	Account(string cname, int start_balance) :
		name(cname), balance(start_balance) {}

	string get_name() const { return name; }
	int get_balance() const { return balance; }

	void deposit(int amt) { balance += amt; }
	void withdraw(int amt) { balance -= amt; }

};



int main()
{
	Account my_act("Lucas");
	cout << my_act.get_name() << endl;

    return 0;
};

