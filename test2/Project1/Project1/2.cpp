#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void enter_string(char str[80])
{
	gets_s(str, sizeof(str));
}