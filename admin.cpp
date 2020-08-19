#include "admin.h"

admin::admin()
{

}

QMultiMap<user, account>& admin::getdeactiveAccounts() {
    return deactiveAccounts;

}

QMap<account, card> &admin::getdeactiveCards() {
    return deactiveCards;

}

void admin::addDeactiveAccount(user _user, account& _account) {
    deactiveAccounts.insert(_user, _account);
}

void admin::addDeactiveCard(account _account, card& _card) {
    deactiveCards.insert(_account, _card);
}
