VERSION = "1.0"

dogfuck: dogfuck.c
	$(CC) -Wall -Werror dogfuck.c -o dogfuck
