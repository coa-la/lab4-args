#include <iostream>
#pragma warning(disable:4996)

using namespace std;
int main() {
	char st[1001];
	scanf("%s", st);
	int pos = 0, best = 1;
	int len = strlen(st);
	for (int i = 0; i < len - 1; ++i) {
		int tmp = 0;
		for (int j = 1; i - j >= 0 && i + j < len; ++j) {
			if (st[i - j] == st[i + j]) {
				tmp = j;
			}
			else break;
		}
		if (2*tmp+1 > best) {
			best = 2*tmp+1;
			pos = i-tmp;
		}

	}
	for (int i = 0; i < len - 1; ++i) {
		int tmp = 0;
		for (int j = 0 ;(( i - j >= 0) && (i + 1 + j < len)); ++j) {
			if (st[i-j] == st[i + j+1]) {
				tmp = j+1;
			}
			else break;
		}
		if (2 * tmp  > best) {
			best = 2 * tmp;
			pos = i-tmp+1;
		}


	}

	for (int i = pos; i < pos + best; ++i)printf("%c", st[i]);
	putchar('\n');
	return 0;
}
