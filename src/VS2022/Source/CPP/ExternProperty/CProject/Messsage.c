#include <stdlib.h>
#include <stdio.h>
#include <string.h>

__declspec(dllexport) void DisplayMessage(int msg) { // __declspec(dllexport) khong can cung duoc
	printf("This function is get from exten method is written by C programming language!\n%d", msg);
	return;
}