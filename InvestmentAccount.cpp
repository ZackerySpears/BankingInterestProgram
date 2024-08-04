#include <iostream>
#include <iomanip>
#include "InvestmentAccount.h"

using namespace std;

// Constructor to initialize the investment details
InvestmentAccount::InvestmentAccount(double initialInvestment, double monthlyDeposit, double annualInterest, int years)
    : initialInvestment(initialInvestment), monthlyDeposit(monthlyDeposit), annualInterest(annualInterest), years(years) {
    months = years * 12;
    totalAmount = initialInvestment;
}

// Method to display initial input data
void InvestmentAccount::displayInputData() const {
    cout << "**********************************" << endl;
    cout << "*********** Data Input ***********" << endl;
    cout << fixed << setprecision(2) << "Initial Investment Amount: $" << initialInvestment << endl;
    cout << fixed << setprecision(2) << "Monthly Deposit: $" << monthlyDeposit << endl;
    cout << "Annual Interest: %" << annualInterest << endl;
    cout << "Number of years: " << years << endl;
}

// Method to calculate and display balance and interest without additional monthly deposits
void InvestmentAccount::calculateWithoutMonthlyDeposits() {
    totalAmount = initialInvestment;

    cout << endl << "Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << "================================================================" << endl;
    cout << "Year          Year End Balance          Year End Earned Interest" << endl;
    cout << "----------------------------------------------------------------" << endl;
    //Loops over each year and prints out each year, total amount and interest amount
    for (int i = 0; i < years; i++) {
        double interestAmount = totalAmount * (annualInterest / 100);
        totalAmount += interestAmount;

        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestAmount << endl;
    }
}

// Method to calculate and display balance and interest with additional monthly deposits
void InvestmentAccount::calculateWithMonthlyDeposits() {
    totalAmount = initialInvestment;

    cout << endl << "Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "================================================================" << endl;
    cout << "Year          Year End Balance          Year End Earned Interest" << endl;
    cout << "----------------------------------------------------------------" << endl;

    //Loops over each year and prints out each year, total amount and interest amount
    for (int i = 0; i < years; i++) {
        double yearlyTotalInterest = 0;

        for (int j = 0; j < 12; j++) {
            double interestAmount = ((totalAmount + monthlyDeposit) * (annualInterest / 100)) / 12;
            yearlyTotalInterest += interestAmount;
            totalAmount += monthlyDeposit + interestAmount;
        }
        cout << (i + 1) << "\t\t$" << setprecision(2) << totalAmount << "\t\t\t$" << yearlyTotalInterest << endl;
    }
    
}

