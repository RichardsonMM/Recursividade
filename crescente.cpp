#include<stdio.h>

using namespace std;

void crescente(int n, int count){

	if(count <= n){
		printf("%d\n", count);
		count++;
		return crescente(n, count);

	}

}

int main(){

	int n, count = 1;

	scanf("%d", &n);

	crescente(n, count);

	return 0;
}
