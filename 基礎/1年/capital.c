#include<stdio.h>
#include<ctype.h>/*文字処理するための関数*/
int main(void)
{
	int ch;
	ch=getchar();
	
	while(ch!=EOF){/*変数chが終了記号でない間繰り返す*/
		
		ch=toupper(ch);
		putchar(ch);
		ch=getchar();
	}
	
	return 0;
}