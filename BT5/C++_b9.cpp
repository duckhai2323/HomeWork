#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    srand(time(NULL));
    int n=rand();
    std::cout<<n;
    return 0;
}