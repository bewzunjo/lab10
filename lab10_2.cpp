#include<iostream>
using namespace std;

int printO (int n,int m){
if(n<=0){
	cout << "Invalid input" << "\n";}
for (int i = 1; i <= n; i++){

	for (int i = 1; i <= m; i++){
		cout << "O";
	}
	if(m<=0){
		cout << "Invalid input";break;}
		cout << "\n";
	}return 0;
}




int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
