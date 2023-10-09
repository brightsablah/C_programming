#include <stdio.h>
#include <string.h>
struct book
{
	int bno;
	char name[10];
	float price;
};
void display(struct book *p);
int main()
{
	struct book b;
	b.bno = 12;
	strcpy(b.name, "C prog");
	b.price = 12.4;
	display(&b);
	return (0);
}
void display(struct book *p)
{
	printf("%d, %s, %f\n", p->bno, p->name, p->price);
}
