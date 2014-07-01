#include <stdio.h>
int main(int argc, const char *argv[])
{
	int n,i,s,t,z;
	int a[1000];
	printf("Please enter an unsigned integer\n");
	scanf("%d",&n);
	while (n>=1) {
		a[i] = n % 2;
		if (n!= 1){
		n = n / 2;
		i++;
		}
		else break;
	}
	t = 1;
	while (i>=0){
		s = s + t * a[i];
		t = t * 2;
		i = i - 1;
	}
	printf("%d\n",s);
	return 0;

