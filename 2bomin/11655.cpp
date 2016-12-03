#include <stdio.h>
using namespace std;

int main(void)
{
	char c;

	while (scanf("%1c", &c) == 1) {
		if (65 <= +c && +c < 91 || 97 <= +c && +c < 123) {
			if (65 <= +c && +c < 78 || 97 <= +c && +c < 110) {
				printf("%c", c + 13);
			}
			else if (78 <= +c && +c < 91 || 110 <= +c && +c < 123) {
				printf("%c", c - 13);
			}
		}
		else
		{
			printf("%c", c);
		}
	}
}
