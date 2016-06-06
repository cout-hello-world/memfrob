#include <stdio.h>

#define BUFFER_SIZE 8192

int main()
{
	unsigned char buffer[BUFFER_SIZE];
	size_t read;
	size_t index;

	do {
		read = fread(buffer, sizeof(unsigned char), BUFFER_SIZE, stdin);
		for (index = 0; i != read; ++index) {
			buffer[index] ^= 42;
		}
		fwrite(buffer, sizeof(unsigned char), read, stdout);
	} while (read == BUFFER_SIZE);

	return 0;
}

