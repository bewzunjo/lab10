#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
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
	
	
	for(int i = 1 ; loan > 0;i++){
	    if (payment > loan){
	    payment = loan + loan*(interest/100);
	}
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << (loan*(interest/100));
	cout << setw(13) << left << loan + (loan*(interest/100));
	if (loan + loan*(interest/100) < 100){
	payment = loan + loan*(interest/100);
	cout << setw(13) << left << payment;    
	}else{
	cout << setw(13) << left << payment;
	}
	cout << setw(13) << left << loan + loan*(interest/100) - payment;
	loan = loan + loan*(interest/100) - payment;
	cout << "\n";	
	}
	return 0;
}
