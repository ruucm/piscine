void my_putstr(char* str)
{
	write(1, str, my_strlen(str));
}

void putline(char* str)
{
	my_putstr(str);
	my_putchar('\n');
}