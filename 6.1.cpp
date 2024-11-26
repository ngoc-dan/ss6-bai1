#include <stdio.h>
int main(){
	int number,sum=0;
	for(int i=1;i<=5;i++){
	printf("nhap so number : ");
	scanf("%d",&number);
	if(number % 2 == 1){
		sum=number+sum;
	}	
	}
    printf("tong cac so le la : %d",sum);
    
    return 0;
	
}
