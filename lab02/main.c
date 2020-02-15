#include <stdio.h>
#include <stdlib.h>


struct vector_t {
	size_t size;
	int *data;
};
typedef struct vector_t vector_t;
vector_t bad_vector_new(int a) {
	vector_t  v;

	v.size = a;
	v.data = malloc(sizeof(int));
	v.data[0] = 0;
	printf("v.data:%d\n",v.data);
	printf("&v:%d\n",&(v));

	return v;
}

int main()
{
    unsigned char a[5]="123";
    printf("%d",sizeof(a));
}



