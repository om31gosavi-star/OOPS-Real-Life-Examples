#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <iomanip>

using namespace std;

// Base Class
class Account {
protected:
    string accountNumber;
    string holderName;
    double balance;

public:
    Account(string accNum, string name, double initialBal)
        : accountNumber(accNum), holderName(name), balance(initialBal) {}

    virtual ~Account() = default;

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << holderName << " deposited: Rs. " << amount 
                 << " | New Balance: Rs. " << balance << endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << holderName << " withdrew: Rs. " << amount 
                 << " | Remaining Balance: Rs. " << balance << endl;
        } else {
            cout << "Withdrawal failed: Insufficient funds for " << holderName << endl;
        }
    }

    virtual void calculateInterest() = 0;

    virtual void displayDetails() const {
        cout << "Acc No: " << accountNumber 
             << " | Name: " << holderName 
             << " | Balance: Rs. " << balance;
    }
};

// Savings Account: Earns regular interest (e.g., 4%)
class SavingsAccount : public Account {
private:
    double interestRate; // e.g., 0.04 for 4%

public:
    SavingsAccount(string accNum, string name, double initialBal, double rate = 0.04)
        : Account(accNum, name, initialBal), interestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * interestRate;
        balance += interest;
        cout << "[Savings] Interest credited: Rs. " << interest 
             << " | New Balance: Rs. " << balance << endl;
    }

    void displayDetails() const override {
        cout << "[Savings Account] ";
        Account::displayDetails();
        cout << " | Rate: " << (interestRate * 100) << "%" << endl;
    }
};

// Current Account: Has an overdraft limit and zero interest
class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    CurrentAccount(string accNum, string name, double initialBal, double limit = 10000.0)
        : Account(accNum, name, initialBal), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
            cout << "[Current] " << holderName << " withdrew: Rs. " << amount 
                 << " | Balance (including overdraft): Rs. " << balance << endl;
        } else {
            cout << "Withdrawal failed: Exceeds overdraft limit for " << holderName << endl;
        }
    }

    void calculateInterest() override {
        cout << "[Current] No interest offered on Current Accounts." << endl;
    }

    void displayDetails() const override {
        cout << "[Current Account] ";
        Account::displayDetails();
        cout << " | Overdraft Limit: Rs. " << overdraftLimit << endl;
    }
};

// Fixed Deposit Account: Higher interest, withdrawal blocked before maturity
class FixedDepositAccount : public Account {
private:
    int termMonths;
    double interestRate;
    bool isMatured;

public:
    FixedDepositAccount(string accNum, string name, double initialBal, int months, double rate = 0.07)
        : Account(accNum, name, initialBal), termMonths(months), interestRate(rate), isMatured(false) {}

    void withdraw(double amount) override {
        if (!isMatured) {
            cout << "Withdrawal blocked: FD for " << holderName << " has not matured." << endl;
        } else {
            Account::withdraw(amount);
        }
    }

    void calculateInterest() override {
        double interest = balance * interestRate * (termMonths / 12.0);
        balance += interest;
        isMatured = true;
        cout << "[Fixed Deposit] Matured! Interest credited: Rs. " << interest 
             << " | Final Amount: Rs. " << balance << endl;
    }

    void displayDetails() const override {
        cout << "[FD Account] ";
        Account::displayDetails();
        cout << " | Term: " << termMonths << " months" 
             << " | Status: " << (isMatured ? "Matured" : "Locked") << endl;
    }
};

int main() {
    vector<unique_ptr<Account>> bank;

    bank.push_back(make_unique<SavingsAccount>("SA101", "Aarav Sharma", 15000));
    bank.push_back(make_unique<CurrentAccount>("CA202", "Tech Innovations", 20000, 10000));
    bank.push_back(make_unique<FixedDepositAccount>("FD303", "Priya Patel", 50000, 12));

    cout << "=== Initial Account Summary ===" << endl;
    for (const auto& acc : bank) {
        acc->displayDetails();
    }
    cout << "\n=== Transactions ===" << endl;

    // Savings Account actions
    bank[0]->deposit(5000);
    bank[0]->withdraw(2000);
    bank[0]->calculateInterest();
    cout << endl;

    // Current Account actions (testing overdraft)
    bank[1]->withdraw(25000);
    bank[1]->calculateInterest();
    cout << endl;

    // FD Account actions (testing maturity lock)
    bank[2]->withdraw(10000);
    bank[2]->calculateInterest();
    bank[2]->withdraw(60000);
    cout << endl;

    cout << "=== Final Account Summary ===" << endl;
    for (const auto& acc : bank) {
        acc->displayDetails();
    }

    return 0;
}