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
    vector_t p=bad_vector_new(60);
	printf("&p:%d\n",&p);
	printf("p.size:%d\n",p.size);
	printf("p.data:%d\n",p.data);
    vector_t p1=bad_vector_new(7);
	printf("p.size:%d\n",p.size);
	printf("p.data:%d\n",p.data);
    printf("&p1:%d\n",&p1);
    printf("p1.size:%d\n",p1.size);
    printf("p1.data:%d\n",p1.data);

}



