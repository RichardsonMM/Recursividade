#include<stdio.h>

using namespace std;



int fatorial(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n * fatorial(n-1);

}


int main(){
	
	int n, fat;

	scanf("%d", &n);

	fat = fatorial(n);

	printf("%d\n", fat);

	return 0;
}
