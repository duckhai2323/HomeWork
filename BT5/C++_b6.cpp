#include<iostream>
int UCLN(int a,int b){
    for(int i=a;i>=1;i--){
        if(a%i==0&&b%i==0) return i;
    }
}
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<UCLN(a,b);
    if(UCLN(a,b)==1) std::cout<<"Hai so doi mot nguyen to cung nhau";
    return 0;
}