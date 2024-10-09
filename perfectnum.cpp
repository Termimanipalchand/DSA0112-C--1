#include <iostream>
using namespace std;

int main() {
    int number,i, sum = 0;

    cout << "Enter a integer: ";
    cin >> number;

  //  for (int i = 1; i <= number / 2; i++) {
      while(i<=number/2){
        if (number % i == 0) { 
            sum += i;
        }
    }
    if (sum == number ) {
        cout << number << " is a perfect number" ;
    } else {
        cout << number << " is not a perfect number";
    }

    return 0;
}

