#include <iostream>
#include "InvestmentAccount.h"

using namespace std;


int main() {
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int years;

    cout << "**********************************" << endl;
    cout << "*********** Data Input ***********" << endl;
    cout << "Initial Investment Amount: $" << endl;
    cin >> initialInvestment;
    cout << "Monthly Deposit: $" << endl;
    cin >> monthlyDeposit;
    cout << "Annual Interest: %" << endl;
    cin >> annualInterest;
    cout << "Number of years: " << endl;
    cin >> years; 

    InvestmentAccount user(initialInvestment, monthlyDeposit, annualInterest, years);
    user.displayInputData();

    user.calculateWithoutMonthlyDeposits();
    user.calculateWithMonthlyDeposits();
    

    return 0;
}