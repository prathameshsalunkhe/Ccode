#include <stdio.h>

void main() {
	int i, j, k, len, t;
	char s[50] = "prathamesh salunkhe";
	for(len = 0; s[len]; len++);
	// Loop through the string to reverse each word
	for(i=0, j=0; i<=len; i++)
	{
		// If a space or the null terminator is encountered
		if(s[i]==' '||s[i]=='\0') 
		{
			// Reverse the current word
			for(k = i - 1; k >= j; k--, j++) 
			{
				t = s[j];
				s[j] = s[k];
				s[k] = t;
			}
			j = i + 1;
		}
	}

	printf("%s\n", s);
}

