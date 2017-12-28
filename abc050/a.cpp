#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	int a, b, ans;
	char op;
	scanf("%d %c %d", &a, &op, &b);
	if (op == '+'){
		ans = a + b;
	}else if (op == '-'){
		ans = a - b;
	}
	cout << ans << endl;
	return 0;
}