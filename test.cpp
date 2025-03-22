#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int findrem(int x){
    int maxpow = 0;
    for(int i = 2; i < x ; i++){
        if((int) x % (int) pow(i,2) == 0){
            maxpow = i;
        } 
    }
    return maxpow;
}

int getfactors(int x){
    int x;
    std::cin >> x;
    int counter  =  0;
    for(int i = 1; i <= x / 2; i++){
        if(x % i == 0){
            counter++;
        }
    }
    int factors[counter];
    counter = 0;

    for(int i = 1; i <= x / 2; i++){
        if(x % i == 0){
            factors[counter] = i;
            counter++;
        }
    }

    for(int i : factors){
        std::cout << i << std::endl;
    }
}

int main(){
    double a , b, c, root1, root2;
    bool rootfound = false;
    std::cout<< "Real Quadraric Equation root finder" <<
     "\n"<< "Please enter the respective coefficients for each polynomial as in the format ax^2 + bx + c"<<
     " starting with a"<< std::endl;
    std::cin>> a;
    std::cout<< "Please enter the number for b" << std::endl;
    std::cin>> b;
    std::cout<< "Please enter the number for c" << std::endl;
    std::cin>> c;
    for(double i = -abs(b) ; i < (abs(b)*abs(c)) ; i++){
        for(double k = -abs(c) ; k < (abs(b)+abs(c)) ; k++){
            if(a != 0){
                if(i*k == c){
                    if((a*i)+k == b){
                        root1 = -i;
                        root2 = -k/a;
                        rootfound = true;
                    }
                    else if(i+(a*k) == b){
                        root1 = -i/a;
                        root2 = -k;
                        rootfound = true;
                    }
                    if (rootfound) break;
                }
                if (rootfound) break;
            }
            if (rootfound) break;
            }
        if (rootfound) break;
    }
    if(!rootfound){
        std::cout<< "The Quadratic equation entered does not have a real root or contains an imaginary root"<< std::endl;
    }
    else if (root1 == root2){
        std::cout << "The Quadratic equation's roots are real and not unique." <<
        "\n"<< "The root of your Quadratic equation is: "<< root1 << std::endl;
    }
    else{
        std::cout << "The Quadratic equation's roots are real and unique." <<
        "\n"<< "The roots of your Quadratic equation are: "<< root1 << " and " << root2 << std::endl;    }
}
