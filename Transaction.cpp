#include "Transaction.h"
#include <iostream>

Transaction::Transaction(string sender, string recipient, double amount) : sender(sender), recipient(recipient), amount(amount)
{
    struct tm timeinfo;
    time(&timestamp); 
    localtime_s(&timeinfo, &timestamp);
    timestamp = mktime(&timeinfo);

}


//returns a formatted string representation of the transaction date
string Transaction::getFormattedDate() const {
    char dateString[80];
    struct tm timeinfo;
    localtime_s(&timeinfo, &timestamp); // Convert the time_t timestamp to a local time representation
    strftime(dateString, 80, "%d-%m-%Y %H:%M:%S", &timeinfo); // Format the date using strftime function
    return string(dateString);
}
