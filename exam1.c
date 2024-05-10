#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a[50000],b[101],c[101];
int main(){
	int i,n,tp=0,max=0x80000000,maxnum=0,maxa=0x80000000,mina=0x7fffffff;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		b[i]=b[i]+25000;
		if(b[i]>maxa)maxa=b[i];
		if(b[i]<mina)mina=b[i];
	}
	for(i=0;i<n;i++){
		a[b[i]]++;
	}
	for(i=mina;i<=maxa;i++){
		if(a[i]==0)continue;
		if(a[i]>max){
			tp=0;
			max=a[i];
			maxnum=1;
			c[tp]=i-25000;
		}
		else if(a[i]==max){
			tp++;
			maxnum++;
			c[tp]=i-25000;
		}
	}
	for(i=0;i<maxnum;i++){
		printf("%d %d\n",c[i],a[c[i]+25000]);
	}
	return 0;
}


