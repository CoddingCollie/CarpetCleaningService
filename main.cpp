#include <iostream>

using namespace std;

int main() {
    //Charges//
    double room_charge_small {25.0};
    double room_charge_large {35.0};
    double tax_rate {0.06}; // 06%
    
    //Taking in the client's input
    unsigned num_rooms_small;
    unsigned num_rooms_large;
    cout << "Hello, welcome to my carpet cleaning service!" << endl;
    cout << "Type how many small rooms you want cleaned: " << endl;
    cin >> num_rooms_small;
    cout << "Type how many large rooms you want cleaned: " << endl;
    cin >> num_rooms_large;
    
    //Calculating prices
    double cost = (num_rooms_large * room_charge_large) + (num_rooms_small * room_charge_small); 
    double taxes = tax_rate * cost;
    double total = taxes + cost;
    
    //Output of estimate
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << num_rooms_small << endl;
    cout << "Number of large rooms: " << num_rooms_large << endl;
    cout << "Price per small room: $" << room_charge_small << endl;
    cout << "Price per large room: $" << room_charge_large << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << taxes << endl;
    cout << "=============================================" << endl;
    cout << "Total: $" << total << endl;
    cout << "This estimate is valid for 30 days" << endl;
    
    return 0;
}