#ifndef VARIADIC_FUNCTIONS
#define VARADIC_FUNCTIONS

typedef struct validTypes
{
	char *valid;
	void (*f)();
} v_types;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
