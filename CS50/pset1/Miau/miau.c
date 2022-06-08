#include <stdio.h>

void miau(int n);

int main(void)
{
     miau(3);
}

void miau(int n)
{
     for(int i = 0; i < 3; i++)
     {
          printf("miau.\n");
	 }
}