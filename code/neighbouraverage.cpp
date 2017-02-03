#include<iostream>
#include<stdio.h>

using namespace std;


// Provides a convolution operation assigning the average value of itself along with its neighbour at the original position

int n;
int arrlimcheck(int x,int y,int n){
	int a = 1;
	if(x<0 || y<0 || y>=n || x>=n)
		a = 0;
	return a;
}

int main(){
	//printf("Enter a number greater than or equal to 3 equal to row-size of square matrix\n");
	scanf("%d",&n);
	if(n<3){
		printf("n has to be greater than 3\n");
		return 0;
	}
	//printf("Provide the elements of the square matrix containing rational numbers of size %d\n",n);
	int i,j,k;
	float a[n][n],b[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	/*printf("Original matrix is :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}*/
	for(i=0;i<n;i++){
                for(j=0;j<n;j++){
			int localpresent = 0;
			float localsum = 0;
			if(arrlimcheck(i-1,j-1,n)){
				localpresent++;
				localsum+=a[i-1][j-1];
			}
			if(arrlimcheck(i-1,j,n)){
				localpresent++;
				localsum+=a[i-1][j];
			}
			if(arrlimcheck(i-1,j+1,n)){
				localpresent++;
				localsum+=a[i-1][j+1];
			}
			if(arrlimcheck(i,j-1,n)){
				localpresent++;
				localsum+=a[i][j-1];
			}
			if(arrlimcheck(i,j+1,n)){
				localpresent++;
				localsum+=a[i][j+1];
			}
			if(arrlimcheck(i+1,j-1,n)){
				localpresent++;
				localsum+=a[i+1][j-1];
			}
			if(arrlimcheck(i+1,j,n)){
				localpresent++;
				localsum+=a[i+1][j];
			}
			if(arrlimcheck(i+1,j+1,n)){
				localpresent++;
				localsum+=a[i+1][j+1];
			}
			b[i][j] = (localsum+a[i][j])/(localpresent+1);
                }
        }
        //printf("The new matrix is : \n");
        for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%f ",b[i][j]);
		}
		printf("\n");
	}
}
