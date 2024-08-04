#ifndef INVESTMENT_ACCOUNT_H
#define INVESTMENT_ACCOUNT_H


class InvestmentAccount 
{
    public:
        //Constructer to initialize the investment 
        InvestmentAccount(double initialInvestment, double monthlyDeposit, double annualInterest, int years);
        
        //Display initial input data
        void displayInputData() const;

        //Calculates and displays balance and interest without addition monthly deposit
        void calculateWithoutMonthlyDeposits();

        //Calculates and displays balance and interest with addition monthly deposit
        void calculateWithMonthlyDeposits();

    private:
        double initialInvestment;
        double monthlyDeposit;
        double annualInterest;
        double totalAmount;
        int years;
        int months;
};


#endif