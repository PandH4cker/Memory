#include "../headers/memory.h"

int main(int argc, char ** argv)
{
	if(graphicInterfaceMemory() == EXIT_FAILURE)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;
}