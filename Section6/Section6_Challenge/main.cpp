#include <iostream>

using namespace std;

int main()
{
	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
	
	int small_rooms {0};
	
	cout << "\nHow many small rooms would you like cleaned? ";
	cin >> small_rooms;
	
	int large_rooms {0};
	
	cout << "How many large rooms would you like cleaned? ";
	cin >> large_rooms;
	
	const double price_per_small_room {25.0};
	const double price_per_large_room {35.0};
	
	const double sales_tax {0.06};
	
	const int expiry_days {30};
	
	cout << "\nEstimate for carpet cleaning service:" << endl;
	cout << "***********************************************" << endl;
	cout << "Number of small rooms: " <<  small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Sales tax: %" << sales_tax << endl;
	
	double small_room_total {small_rooms * price_per_small_room};
	double large_room_total {large_rooms * price_per_large_room};
	double total_sum {small_room_total + large_room_total};
	double tax {total_sum * sales_tax};
	double total_sum_with_tax {total_sum + tax};
	
	cout << "Cost: $" << total_sum << endl;
	cout << "Tax: $" << tax << endl;
	cout << "=======================================" << endl;
	cout << "Total estimate: $" << total_sum_with_tax << endl;
	cout << "This estimate is valid for " << expiry_days << " days" << endl;
	
	cout << "***********************************************\n" << endl;
	
	return 0;
}