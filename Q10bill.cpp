  #include <iostream>
  using namespace std;

  int main() {
      string customerName, contactNo, address;
      int meterNo, newReading,currentReading, oldReading;
      double meterRent, units, charges, tax, billAmount;

      // Input from the user
      cout << "Enter customer name: ";
      cin>>customerName;
      cout << "Enter contact number: ";
      cin>>contactNo;
      cout << "Enter address: ";
      cin>>address;
      cout << "Enter meter number: ";
      cin >> meterNo;
      cout << "Enter new reading: ";
      cin >> newReading;
      cout << "Enter current reading: ";
      cin >> currentReading;
      cout<<"Enter old reading:";
      cin>>oldReading;
      cout << "Enter meter rent: ";
      cin >> meterRent;

      //  Calculate units consumed
       units = newReading - oldReading;

      // Calculate charges and tax based on units consumed
      if (units > 1 && units < 100) {
          charges = units * 0.80;
          tax = charges * 0.02;
      } else if (units > 100 && units < 300) {
          charges = units * 1.00;
          tax = charges * 0.05;
      } else if (units > 300 && units < 500) {
          charges = units * 1.20;
         tax = charges * 0.07;
      } else if (units > 500 && units < 800) {
          charges = units * 2.00;
          tax = charges * 0.11;
      } else if(units > 800 && units < 1200){
          charges = units * 2.50;
          tax = charges * 0.15;
      } else if(units > 1200){
          charges = units * 3.40;
          tax = charges * 0.18;
      }
      else {
          cout << "Invalid units consumed." << endl;
          return 0;
     }

      // Calculate bill amount
      billAmount = charges + tax + meterRent;

      // Print the bill details
      cout << "\n------------------ Electricity Bill ------------------" << endl;
      cout << "Customer Name: " << customerName << endl;
      cout << "Contact No.: " << contactNo << endl;
     cout << "Address: " << address << endl;
      cout << "Meter No.: " << meterNo << endl;
      cout << "New Reading: " << newReading << " units" << endl;
      cout << "Current Reading:" << currentReading << " units"<<endl;
      cout << "Old Reading: " << oldReading << " units" << endl;
      cout << "Meter Rent: Rs. " << meterRent << endl;
      cout << "Units Consumed: " << units << " units" << endl;
      cout << "Charges: Rs. " << charges << endl;
      cout << "Tax: Rs. " << tax << endl;
      cout << "Bill Amount: Rs. " << billAmount << endl;

      return 0;
  }
