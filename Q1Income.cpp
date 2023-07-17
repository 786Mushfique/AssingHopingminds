#include<iostream>
using namespace std;
int main(){

    int income;
    double tax;
    cout<<"Enter the kapil annual income"<<endl;
    cin>>income;

    if (income > 1800000) {
         tax += (income - 1800000) * 0.25;  // 25% on exceeding 18 lacs
         income = 1800000;
    }
    if (income > 1400000) {
        tax += (income - 1400000) * 0.15;  // 15% on exceeding 14 lacs
         income = 1400000;
    }
      if (income > 1000000) {
          tax += (income - 1000000) * 0.10;  // 10% on exceeding 10 lacs
          income = 1000000;
     }
     if (income > 700000) {
        tax += (income - 700000) * 0.05;   // 5% on exceeding 7 lacs
     }
    
    cout << "The income tax for Mr. Kapil Singh is: " << tax << " INR" <<endl;

    return 0;
}