
#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{
    double loan;
	double interest;
	double payment; 

    cout << "Enter initial loan: "; 
    cin >> loan;
    cout << "Enter interest rate per year (%): "; 
    cin >> interest;
    cout << "Enter amount you can pay per year: ";
    cin >> payment;

    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    int i = 1;
    double Interest,total,balance;
    cout << fixed << setprecision(2); 
    while (loan > 0.00) 
    {
        cout << setw(13) << left << i; 
        cout << setw(13) << left << loan;
        Interest = (loan*interest)/100;
        cout << setw(13) << left << Interest;
    total = loan + (loan*interest)/100;
            if (payment > total)
            {
                payment = total;
            }
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        balance = total-payment;
        cout << setw(13) << left << balance;
        cout << "\n";
        i++;
        loan = balance;
    }

    return 0;
}