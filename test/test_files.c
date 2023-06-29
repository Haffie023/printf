# include "../main.h"

int main(void)
{
	char a = 'z';
	char b = 'y';
	char c = 'x';
	char d = 'w';
	char e = 'v';
	char f = 'u';
	char g = 't';
	char h = 's';
	char i = 'r';
	char j = 'q';
	char k = 'p';
	char l = 'o';
	char m = 'n';
	char n = 'm';
	char o = 'l';
	char p = 'k';
	char q = 'j';
	char r = 'i';
	char s = 'h';
	char t = 'g';
	char u = 'f';
	char v = 'e';
	char w = 'd';
	char x = 'c';
	char y = 'b';
	char z = 'a';
	_printf("This is a sentence\n");
	printf("This is a test file\n");
	printf("L%c%c'%c %c%c%c%c %c%c%c%\0 %c%c%c%c %c%c%c%c.\n",a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, q, r);
	_printf("L%c%c'%c %c%c%c%c %c%c%c%\0 %c%c%c%c %c%c%c%c.\n",a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, q, r);
	printf("%c%c%c%c%c%c%c%c%c",s,t,u,v,w,x,y,z, p);
	_printf("%c%c%c%c%c%c%c%c%c",s,t,u,v,w,x,y,z, p);
	_putchar('\n');
	return(0);
}