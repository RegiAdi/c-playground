#include <stdio.h>

typedef struct User
{
	int id;
	char name[25];
	char password[12];
} User;

typedef int AppId;

int main()
{
	AppId app_id = 32132;

	printf("App ID: %d\n", app_id);

	User user1 = {1, "Foo", "12345678"};
	User user2 = {2, "Bar", "123456"};

	printf("%d\n", user1.id);
	printf("%s\n", user1.name);
	printf("%s\n", user1.password);

	printf("%d\n", user2.id);
	printf("%s\n", user2.name);
	printf("%s\n", user2.password);

	return 0;
}
