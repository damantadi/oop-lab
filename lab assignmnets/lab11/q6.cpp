//wap to convert the upper case letter of a given ile into lower case and vice versa

#include <bits/stdc++.h>

int main()
{
	// initializing the file pointer
	FILE* fptr;

	// name of the file as sample.txt
	char file[50] = { "data/file1.txt" };
	char ch;

	// opening the file in read mode
	fptr = fopen(file, "r");
	ch = fgetc(fptr);

	// converting into upper case
	while (ch != EOF) {

		// converting char to upper case
		ch = toupper(ch);
		printf("%c", ch);
		ch = fgetc(fptr);
	}

	// closing the file
	fclose(fptr);

	return 0;
}
