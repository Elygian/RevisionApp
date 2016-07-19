#include <iostream>
#include <string>
#include <vector>

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

	void deposit(int amt);
	void withdraw(int amt);

};

void Account::deposit(int amt) { balance += amt; }
void Account::withdraw(int amt) { balance -= amt; }

class Bank {

	vector<Account> accounts;
	int i;

	string print_accounts(vector<Account>)
	{
		for (int i = 0; i<accounts.size; i++);
		cout << i << " " << endl;
	}

};



int main()
{
	//Account my_act("Lucas");
	//cout << my_act.get_name() << endl;

	Bank my_bank;

	print_accounts(vector<Account>);

    return 0;
};

