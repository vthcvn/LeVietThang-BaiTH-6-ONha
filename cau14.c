#include <stdio.h>
void nhapmang(int *a, int *n){
	printf("Hay nhap so luong phan tu(Lon hon 0): ");
	scanf("%d", n);
	int i;
	for(i=0; i<*n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%2d", a[i]);
	}
}
void chepmang(int a[], int n, int b[]){
	int i;
	for(i=0; i<n; i++){
		if(a[i]%2!=0){
			int min=i;
			int j;
			for(j=i+1; j<n; j++){
				if(a[min]>a[j] && a[j]%2!=0)
					min=j;
				int tmp=a[min];
				a[min]=a[i];
				a[i]=tmp;
			}
		}
	} 
}
int main(){
	int a[100], n;
	int b[100];
	nhapmang(a, &n);
	chepmang(a, n, b);
	printf("\nPhan tu cua mang b: ");
	xuatmang(a, n);
}
