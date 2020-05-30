#include <iostream>
#pragma warning(disable:4996)

using namespace std;
int main() {
	char st[51];
	int count[26];
	memset(count, 0, sizeof(count));

	scanf("%s", st);
	for (int i = 0; i < strlen(st); ++i) {
		++count[(int)(st[i] - 'a')];
	}
	char max = 0;
	for (int i = 1; i < 26; ++i) {
		if (count[i] > count[max]) {
			max = i;
		}
	}
	printf("%c", max + 'a');
	return 1;
}
