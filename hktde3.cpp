#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int numbers[100];
	int currenIndex=0;
	int sum;
	int max,min;
	int count;
	do{
		printf("------------MENU-----------\n");
		printf("1.nhap gia tri n phan tu cua mang\n");
		printf("2.in ra gia tri cac phan tu trong mang\n");
		printf("3.tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
		printf("4.in ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5.su dung thuat toan sap xep chen sap xep mang tang dan\n");
		printf("6.tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7.sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan,cac phan tu chia het cho 5 o cuoi mang theo thu tu tang dan,cac phan tu con lai o giua mang theo thu tu giam dan\n");
		printf("8.nhap gia tri m tu ban phim chen gia tri m vao mang sap xep tang dan dung vi tri\n");
		printf("9.thoat\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap n can nhap vao mang\n");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("moi nhap numbers[%d]",currenIndex);
					scanf("%d",&numbers[currenIndex]);
					currenIndex++;
				}
				break;
			case 2:
				for(int i=0;i<currenIndex;i++){
					printf("numbers[%d] = %d\n",i,numbers[i]);
				}
				break;
			case 3:
				sum=0;
				for(int i=0;i<currenIndex;i++){
					if(numbers[i]%2==0 && numbers[i]%3==0){
						sum+=numbers[i];
					}
				}
				printf("tong so chia het cho 2 va 3 la %d\n",sum);
				break;
			case 4:
				max=numbers[0];
				min=numbers[0];
				for(int i=0;i<currenIndex;i++){
					max = (max > numbers[i]) ? max : numbers[i];
					min = (min < numbers[i]) ? min : numbers[i];
				}
				printf("MAX=%d\nMIN=%d",max,min);
				break;
			case 6:
				sum=0;
				for(int i=0;i<currenIndex;i++){
					count=0;
					for(int j=0;j<numbers[i];j++){
						if(numbers[i] % j == 0){
							count = 1;
						}
					}
					if(count==0 && numbers[i]>=2){
						sum+=numbers[i];
					}
				}
				printf("tong cac so nguyen to la %d\n",sum);
				break;
			case 9:
				exit(0);
		}
	}while(9 == 9);
}
