#include <stdio.h>

int main(void)
{
	printf("Hello, I am Aritra Mondal!\n");
	printf("I currently study at NIT Durgapur.\n");
	printf("I am a 1st year student.\n");
	printf("My roll number is 24F80001.\n");

	int age = 0;
	char name[256];
	char roll[12];

	printf("Enter your name: ");
	fgets(name, 256, stdin);

	printf("Enter your age: ");
	scanf("%d", &age);

	printf("Enter your roll no.: ");
	scanf("%s", roll);

  	for (int i = 0; i < 256; ++i) {
		if (name[i] == '\n') {
			name[i] = '\0';
			break;	
		}
	}

	printf("Hello %s.\n", name);
	printf("You are %d years old.\n", age);
	printf("Your roll no. is %s.\n", roll);

	return 0;
}
