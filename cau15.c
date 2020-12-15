#include <stdio.h>
void gopmang(int a[], int n, int b[], int m, int c[], int p){
	p=n+m;
	int i;
	for(i=0; i<p; i++){
		if(i<n)
			c[i]=a[i];
		else c[i]=b[i-n];
	}
}
void xuatmang(int *a, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%2d", a[i]);
	}
}
void sapxeptang(int *a, int n ){
	int i,j;
	for (i=0; i<n-1; i++){
		for (j=n-1; j>i; j--){
			if(a[j]<a[i]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}
int main(){
	int a[5]={1,3,5,7,9};
	int b[3]={2,4,6};
	int c[100];
	int n, m, p;
	gopmang(a, n, b, m, c, p);
	sapxeptang(c ,p);
	xuatmang(c, p);
}
