#include "monty.h"

int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *opcode;
	int value;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		opcode = strtok(line, " \n\t\r");
		value = atoi(strtok(NULL, " \n\t\r"));

		instruction_t func = get_func(opcode);

		if (!func)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", opcode);
			exit(EXIT_FAILURE);
		}

		func(&stack, value);
	}

	free(line);
	fclose(file);
	return (0);
}

