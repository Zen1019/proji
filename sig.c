#include <sys/types.h>
#include <signal.h>
#include <stdio.h>

int main(){

	int a;
	scanf("%d",&a);
	kill(a, SIGUSR1);
	printf("signal送信\n");

}
