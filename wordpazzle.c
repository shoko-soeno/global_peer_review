#include <stdio.h>
#include <string.h>

int is_solvable(int n, char** words) {
	int i;
	char last_char_of_previous_word;
	char first_char_of_current_word;

	if (n < 2)
		return (0);
	i = 1;
	while (i < n)
	{
		last_char_of_previous_word = words[i-1][strlen(words[i-1]) - 1];
		first_char_of_current_word = words[i][0];
		if (last_char_of_previous_word != first_char_of_current_word)
			return (0);
		i++;
	}
	return (1);
}

int main() {
	char *case1[] = {"dash", "hard"};
	printf("Output: %d\n", is_solvable(2, case1));
	char *case2[] = {"dash", "too", "hard"};
	printf("Output: %d\n", is_solvable(3, case2));
	return 0;
}
