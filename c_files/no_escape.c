#include <signal.h>
#include <stdio.h>

void handler(int signum) {
	printf("There is no escape.\n");
}

int main() {
	printf("You cannot escape this program.\n");
	while(1) {
		signal(SIGINT, handler);
		signal(SIGQUIT, handler);
		signal(SIGTSTP, handler);
	}
	return 0;
}
