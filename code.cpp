#include<iostream>
int main(){

    int l,b;
    std::cout << "How many columns? \n" << ": ";
    std::cin>>l;
    std::cout << "How many rows?  \n " << ": ";
    std::cin>>b;

    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
