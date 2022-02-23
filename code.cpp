// Solution of 1009 - Salary with Bonus in beecrowd
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
 
    string sellerName;
    double fixedSalary,salesTotal,TOTAL;
    cin>> sellerName >>fixedSalary>>salesTotal;
    TOTAL = fixedSalary + (salesTotal*0.15);
    
    cout << "TOTAL = R$ " <<fixed<< setprecision(2)<<TOTAL<<"\n";
    system("pause");
    return 0;
}