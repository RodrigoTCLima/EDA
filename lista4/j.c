#include <stdio.h>
int main(){
	char l;
	int a = 0;
	while (scanf("%c", &l), l!='\n')
	{
		a = a+l-'0';
	}
	printf("%d\n", a);
	
	return 0;
}