#include <string>
#include"Notification.h"
#include "Transaction.h"
using namespace std;
class User
{
	string userName;
	string password;
	double balance;
	Notification notifications;
	Transaction sentTransaction;
	Transaction recievedTransaction;

	void Register();
	void Login();
	void ViewBalance();
	void SendMoney();
	void RequestMoney();
	void ViewHistory();
	void EditProfile();
	bool Activated();
};

