#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char* prog[3];
	prog[0] = "firefox";
	prog[1] = "https://www.nu11secur1ty.com";
	prog[2] = '\0';

	execvp(prog[0], prog);
}
