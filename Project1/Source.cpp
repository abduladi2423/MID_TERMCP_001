#include<iostream>
using namespace std;
int main() {

	double sale_rate, total_cost;
	int price, quant;
	string choice;

	do {
		cout << "   \n\n DO YOU WANT TO CALCULATE THE TOTAL PRICE :     ";
		cin >> choice;
		cout << "\n" << "\n";

		if (choice == "no")
		{
			break;
		}

		do {
			cout << "Enter the price of the product:\n";
			cin >> price;
			cout << "Enter the quantity of the product:\n ";
			cin >> quant;
			cout << "Enter the applicable sales rate:";
			cin >> sale_rate;

			total_cost = (price * quant) + sale_rate;

			if (quant >= 10) {
				total_cost = total_cost * 0.1;
			}
			cout << "\n\n The Total Cost is = " << total_cost;

			price++;

		} while (price <= 0);
	} while (choice == "yes");

		return 0;
 }