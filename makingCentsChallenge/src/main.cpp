#include <iostream>

using namespace std;

int main(){
    int amount_in_cents {0};
    int dollars{},quarters{}, dimes{},nickels{},pennies{};
    cout << "Enter an amount in cents : ";
    cin >> amount_in_cents;



    cout << "You can provide change as follows: "<<endl;
    dollars = amount_in_cents/100;
    amount_in_cents = amount_in_cents - dollars*100;
    cout << "\tdollars  : " << dollars<<endl;
    quarters = amount_in_cents/25;
    amount_in_cents = amount_in_cents - quarters*25;
    cout << "\tquarters : " << quarters<<endl;
    dimes = amount_in_cents/10;
    amount_in_cents = amount_in_cents - dimes*10;
    cout << "\tdimes    : " << dimes<<endl;
    nickels = amount_in_cents/5;
    amount_in_cents = amount_in_cents - nickels*5;
    cout << "\tnickels  : "<< nickels<<endl;
    pennies = amount_in_cents/1;
    amount_in_cents = amount_in_cents - quarters*1;
    cout << "\tpennies  : " << pennies<<endl;
    return 0;
}