#include <iostream>
#include <vector>

typedef struct{
    int coeff;
    int expo; 
} term;

std::vector<term> polyadd(std::vector<term> poly1, std::vector<term> poly2){
    std::vector<term> tempterm;
    for(int i=0; i<poly1.size();i++){
        term temp;
        temp.coeff = poly1[i].coeff;
        temp.expo = poly1[i].expo;
        tempterm.push_back(temp);
    }
    for(int i=0; i<poly2.size();i++){
        term temp;
        temp.coeff = poly2[i].coeff;
        temp.expo = poly2[i].expo;
        tempterm.push_back(temp);
    }
    for(int i=0; i<tempterm.size(); i++){
        for(int j=0; j<tempterm.size();j++){
            if(i==j){
                continue;
            }
            if(tempterm[i].expo == tempterm[j].expo){
                tempterm[i].coeff += tempterm[j].coeff;
                tempterm.erase(tempterm.begin()+j);
            }
        }
    }
    return tempterm;
}

int main(){
    std::vector<term> poly1;
    std::vector<term> poly2;

    int a,b;
    std::cout << "Enter the number of terms in poly1 and poly 2";
    std::cin >> a;
    std::cin >> b;

    std::cout << "Poly 1\n";
    for(int i=0; i<a; i++){
        term temp;
        std::cout << "Coeff:";
        std::cin >> temp.coeff;
        std::cout << "Expo";
        std::cin >> temp.expo;
        poly1.push_back(temp);
    }

    std::cout << "Poly 2\n";
    for(int i=0; i<a; i++){
        term temp;
        std::cout << "Coeff:";
        std::cin >> temp.coeff;
        std::cout << "Expo";
        std::cin >> temp.expo;
        poly2.push_back(temp);
    }

    std::vector<term> poly3 = polyadd(poly1, poly2);

    for(int i=0; i<poly3.size();i++){
        std::cout << poly3[i].coeff << "x^" << poly3[i].expo << "+";
    }

    return 0;
}