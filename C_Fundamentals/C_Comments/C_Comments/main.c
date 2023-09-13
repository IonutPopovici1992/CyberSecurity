#include <stdio.h>

int main() {

	// C Single-line Comments

	/*
		C Multi-line Comments
	*/

	/*
		escape sequence = character combination consisting of a backslash \
						  followed by a letter or combination of digits.

		They specify actions within a line of text (string):
		\a - Alarm or Beep = It is used to generate a bell sound in the C program.
		\b - Backspace = It is used to move the cursor one place backward.
		\f - Form Feed = It is used to move the cursor to the start of the next logical page.
		\n - New Line = It moves the cursor to the start of the next line.
		\r - Carriage Return = It moves the cursor to the start of the current line.
		\t - Horizontal Tab = It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
		\v - Vertical Tab = It is used to insert vertical space.
		\\ - Backlash = Used to insert backslash character.
		\’ - Single Quote = It is used to display a single quotation mark.
		\” - Double Quote = It is used to display double quotation marks.
		\? - Question Mark = It is used to display a question mark.
		\ooo - Octal Number = It is used to represent an octal number.
		\xhh - Hexadecimal Number = It represents the hexadecimal number.
		\0 - NULL = It represents the NULL character.
	*/

	printf("Hello, World!!!\n\n");

	printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

	printf("\a\n");

	printf("\"Hello, World!!!\"\n");

	return 0;
}
