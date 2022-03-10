#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    int n;
    std::cin>>n;
    int *a = new int(n);
    srand(time(NULL));
    for(int i=0;i<n;i++){
        a[i]=rand()%50;
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
     }
     std::cout<<std::endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int l=i+2;l<n;l++){
                if((a[i]+a[j]+a[l])%25==0) std::cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<std::endl;
            }
        }
    }
    return 0;
}
