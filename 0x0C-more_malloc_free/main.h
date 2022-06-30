#ifndef MAIN_FILE
#define MAIN_FILE

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int odl_size, unsigned int new_size);
void _prntstr(char *s);
long int numstrchk(char *s);
void *_calloc_buffer(long int num, long int size);
char *trimzero(char *s);
int main(int ac, char **av);

#endif
