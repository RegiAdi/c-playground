#include <stdio.h>
#include <string.h>

struct Player
{
	char name[12];
	int score;
};

int main()
{
	struct Player player1;
	struct Player player2;

	strcpy(player1.name, "Foo");
	player1.score = 100;

	strcpy(player2.name, "Bar");
	player2.score = 200;

	printf("%s\n", player1.name);
	printf("%d\n", player1.score);

	printf("%s\n", player2.name);
	printf("%d\n", player2.score);

	return 0;
}
