#include<iostream>
int main(){
	int m,n,k;
	std::cin>>m>>n>>k;
	char a[m][n];
	int  b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=-1;
		}
	}
	for(int i=0;i<m;i++){
		for(int  j=0;j<n;j++){
			std::cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		int x,y;
		std::cin>>x>>y;
		if(a[x][y]=='M'){
			std::cout<<"YOU'RE DEAD!"<<std::endl;
			 for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<std::endl;
    } break;
		}else if(a[x][y]=='E'){
			
		   int k=0;
			    for(int q=x-1;q<=x+1;q++){
			   	for(int p=y-1;p<=y+1;p++){
			   		if(a[q][p]=='M') k++;
				   }
			   }
			    b[x][y]=k;
				for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					std::cout<<b[i][j]<<" ";
				}
				std::cout<<std::endl;
		}
	}
  }
    return 0;
}