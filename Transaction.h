#pragma once
#include"User.h"
#include <string>
#include <ctime>
using namespace std;
class Transaction
{
public: 
	string sender;
	string recipient;
	double amount;
	time_t timestamp;  //to store date of transaction

	Transaction(string sender, string recipient, double amount);
	string getFormattedDate() const;

};
