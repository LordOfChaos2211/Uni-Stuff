#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <complex>

double findrem(double x){
    double maxpow = 0;
    for(int i = 2; i < x ; i++){
        if(remainder(x ,pow(i,2)) == 0){
            maxpow = i;
        } 
    }
    return maxpow;
}

int main(){
    double a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    double plusbase = -b /2*a;
    double outRadical;
    double inRadical;
    double preprocessing = (pow(b,2) - 4*a*c);
    if(findrem(preprocessing)==0){
        outRadical = preprocessing;
    }
    else{
        outRadical = findrem(preprocessing);
        inRadical = (preprocessing / findrem(preprocessing));
    }
    if(findrem(preprocessing)==0){
        std::cout << plusbase << " sqrt of " << (sqrt(fabs(preprocessing))/2) << "i"<< std::endl; 
    }
    else{
        std::cout << plusbase << outRadical << "* sqrtof" << inRadical << "i"; 
    } 
}