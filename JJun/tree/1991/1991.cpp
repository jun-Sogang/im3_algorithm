#include <cstdio>
#include <cstring>
int child[27][2];


void preorder(int start) {
	if (start == -1)
		return ;
	printf("%c", start + 'A');
	preorder(child[start][0]);
	preorder(child[start][1]);
}

void inorder(int start) {
	if (start == -1)
		return ;
	inorder(child[start][0]);
	printf("%c", start + 'A');
	inorder(child[start][1]);
}

void postorder(int start) {
	if (start == -1)
		return ;
	postorder(child[start][0]);
	postorder(child[start][1]);
	printf("%c", start + 'A');
}

int main() {
	int n;
	scanf("%d%*c", &n);
	memset(child, 0, sizeof(child));
	for (int i = 0; i < n; ++i) {
		char a, b, c;
		scanf("%c %c %c%*c", &a, &b, &c);
		if(b != '.')
			child[a - 'A'][0] = b - 'A';
		else
			child[a - 'A'][0] = -1;
		if(c != '.')
			child[a - 'A'][1] = c - 'A';
		else
			child[a - 'A'][1] = -1;
	}
	preorder(0);
	puts("");
	inorder(0);
	puts("");
	postorder(0);
}