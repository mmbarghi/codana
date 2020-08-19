#include "shorttermpersonal.h"
#include <QDate>

shortTermPersonal::shortTermPersonal()
{

}

void shortTermPersonal::profitability()
{
    //TO DO: read from file: read opening date from file and put it like example between parentheses and qoutation marks
    //d1 = oppening date
    //d2 = current date
    QString oppeningDate;// = (//oppenig date will be here in this format :"2020-07-20");//must be set to oppening date
    QDate d1 = QDate::fromString(oppeningDate,"yyyy-MM-dd");
    QDate d2 = QDate::currentDate();
    int duration = d1.daysTo(d2);

    if(duration % 30 == 0)
    {
        int prof_balance = this->getBalance()*(0.005);
        //TO DO: write to file : update account's balance to prof_balance
    }
    else
        return;
}
