#include <stdio.h>
void nhapN(int *n){
	printf("Hay nhap n (0<N<50): ");
	scanf("%d", n);
	while(*n<=0 && *n>=50){
		printf("Hay nhap lai n (0<N<50): ");
		scanf("%d", n);
	}
}
void nhapMang(float *a, int *n){
	printf("Hay nhap so luong phan tu(Lon hon 0): ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
}
void timMax(float *a, int n, float *max){
	int i;
	for (i=0; i<n; i++){
		if(a[i]>*max)
			*max=a[i];
	}
	printf("%f", max);
}
float timMin(float a[], int n){
	int i;
	float min=a[0];
	for (i=0; i<n; i++){
		if(a[i]<min)
			min=a[i];
	}
	return min;
}

int main(){
	int n, chon;
	float arr[100];
	float max=arr[0];
	printf("Nhap 1 chuc nang: ");
	scanf("%d", &chon);
	switch(chon){
		case 1:
			nhapN(&n);
			break;
		case 2: 
			nhapMang(arr, &n);
			break;
		case 3: 
			nhapMang(arr, &n);
			timMax(arr, n, &max);
			break;
		case 4: 
			nhapMang(arr, &n);
			
			break;
		case 5:
			nhapMang(arr, &n);
			
			break;
	}
}
