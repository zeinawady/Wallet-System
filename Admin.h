#pragma once
#include"User.h"
#include "Transaction.h"
class Admin
{
	User user;
	Transaction transactions;

	void Login();
	void ViewUsersInfo();
	void AddUser();
	void Edit();
	void Delete();
	void Suspend();
	void ViewTransactions();
	void AdjustBalance();
	void ReActivate();
};

