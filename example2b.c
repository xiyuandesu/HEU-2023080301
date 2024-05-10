#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a[50000],b[21],c[21];
int cmp(const void* a,const void* b){
	return (*(int*)b-*(int*)a);
}
int main(){
	int i,n,num=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		b[i]=b[i]+25000;
		c[i]=b[i];
	}
//	for(i=0;i<n;i++){
//		printf("%d ",b[i]);
//	}
	qsort(b,n,sizeof(int),cmp);
	for(i=0;i<n;i++){
		if(a[b[i]]==0){
		a[b[i]]=num;
		num++;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[c[i]]);
	}
	return 0;
}


