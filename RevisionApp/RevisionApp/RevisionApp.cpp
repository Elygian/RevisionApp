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

private:
	vector<Account> accounts;

public:
	void add(Account &act) {
		accounts.push_back(act);
	}
	
	void print_accounts() const
	{
		for (int i = 0; i < accounts.size(); i++)
		{
			cout << accounts[i].get_name() << "has £" << accounts[i].get_balance() << endl;
		}
	}

};

int main()
{
	Account my_act("Lucas");
	my_act.deposit(150);
	cout << my_act.get_name() << "" << my_act.get_balance() << endl;

	Account christos_act("Christos");
	christos_act.deposit(20);
	cout << christos_act.get_name() << "" << christos_act.get_balance() << endl;

	Bank bank;
	my_act.withdraw(25);
	christos_act.deposit(50);
	bank.add(my_act);
	bank.add(christos_act);
	
	bank.print_accounts();

    return 0;
};

