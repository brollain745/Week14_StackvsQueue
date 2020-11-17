//Author: Brigitte Rollain
//GitHub:
//November 17, 2020
//CSIS 123A

#include <iostream>
#include <queue>

using namespace std;

queue<int> get_digits(int number);
int get_sum_of_digits(const queue<int> &values);
int get_reverse(const queue<int> &values);

int main() {
  int number = 123;
  queue<int> digits = get_digits(number);

  int sum = get_sum_of_digits(digits);
  int reverse = get_reverse(digits);

 cout << "Sum       : " << sum << endl;
  cout << "Reverse   : " << reverse << endl;


  return 0;
}

queue<int> get_digits(int number){
  queue<int> digits;
  for(int temp = number; temp > 0; temp/=10){
    digits.push(temp % 10);
  }

  return digits;
}

int get_sum_of_digits(const queue<int> &values){
  int sum {};

 for(auto digits = values; !digits.empty(); digits.pop()){
  sum += digits.front();
  }
  return sum;
}

int get_reverse(const queue<int> &values){
  int reverse {};
 for(auto digits = values; !digits.empty(); digits.pop()){
  reverse *=10;
  reverse += digits.front();
  }
  return reverse;
}