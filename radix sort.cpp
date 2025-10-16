#include<stdio.h>
void read(int[],int);
void display(int[],int);
int largest(int[],int);
int ndigits(int);
void radixsort(int[],int);
void read(int a[],int){
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[],int){
    int i;
     for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int largest(int a[],int n){
    int i,l=a[0];
      for(i=0;i<n;i++){
        if(l<a[i])  
        l=a[i];
      }
      return l;
}
int ndigits(int x){
    int d=0;
    while(x!=0){
        d++;
        x=x/10;
        
    }
    return d;
}
void radixsort(int a[],int n){
    int i,j,k,d,l,s,b[10][n],count[10],div=1,pos;
    l=largest(a,n);
    d=ndigits(l);
    for(s=1;s<=d;s++){
        for(i=0;i<n;i++)
         count[i]=0;
          for(i=0;i<n;i++)
          {
              pos=(a[i]/div)%10;
              b[pos][count[pos]]=a[i];
              count[pos]++;
          }
          k=0;
          for(i=0;i<10;i++){
          	for(j=0;j<count[i];j++)
          	{
          		a[k]=b[i][j];
          		k++;
			  }
		  }
		div=div*10;  
    }
 
}
int main()
{
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	read(a,n);
	printf("before sorting\n");
	display(a,n);
	radixsort(a,n);
	printf("\nafter sorting:");
	display(a,n);
	return�0;
}
