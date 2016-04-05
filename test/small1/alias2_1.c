#include <stdlib.h>

extern int original;

extern int aliasname;

int main(void)
{
	aliasname = 100;
	if (aliasname == original) return 0;
	else abort();
}
