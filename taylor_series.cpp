#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main(){
    /*
    int in,sum,odd,even;
    sum = 0;
    odd = 0;
    even = 0;
    std::cin >> in;
    for(int i = 1; i <= in ; i++){
        sum += i;
        i % 2 == 0 ? even++ : odd++;
    }
    std::cout << sum << "\n" << "Even: " << even << "\n" << "Odd: " << odd << std::endl;
    */
   /*
    int number;
    std::cin >> number;
    int counter  =  0;
    for(int i = 1; i <= number / 2; i++){
        if(number % i == 0){
            counter++;
        }
    }
    int factors[counter];
    counter = 0;

    for(int i = 1; i <= number / 2; i++){
        if(number % i == 0){
            factors[counter] = i;
            counter++;
        }
    }

    for(int i : factors){
        std::cout << i << std::endl;
    }
        */
   /*
   double in;
   double sum = 0;
   std::cin >> in;
   for(double i = 1; i <= in; i++){
    sum += 1/i;
   }
   std::cout << sum << std::endl;
   */
  /*
   double in;
   double sum = 0;
   std::cin >> in;
   for(double i = 1; i <= in; i++){
    sum += pow(i,-1);
   }
   std::cout << sum << std::endl;
    */
   /*
    double x;
    bool signcheck = false;
    double result = 1;
    std::cin >> x;
    for(int i = 2; i <= 10 ; i+=2){
        double temp = x;
        double temp2 = 1;
        for(int j = 1; j <= i; j++){
            temp *= x;
        }
        for(int k = 1; k <= i; k++){
            temp2 *= k;
        }
        if(signcheck){
            result += temp/temp2;
            signcheck = false;
        }
        else{
            result -= temp/temp2;
            signcheck = true;
        }
    }
    */

    double x;
    bool signcheck = false;
    std::cin >> x;
    double result = x;
    for(int i = 3; i <= 10 ; i+=2){
        double temp = x;
        double temp2 = 1;
        for(int j = 1; j <= i; j++){
            temp *= x;
        }
        for(int k = 1; k <= i; k++){
            temp2 *= k;
        }
        if(signcheck){
            result += temp/temp2;
            signcheck = false;
        }
        else{
            result -= temp/temp2;
            signcheck = true;
        }
    }
}