#include <stdio.h>

void run()
{
	static int hens;
	int eggs = 4;

	hens += 1;
	eggs += 1;

	printf("%d %d\n", hens, eggs);
}

int main()
{
	run();
	run();
	run();

	printf("Press ENTER key to Continue\n");
	getchar();
}