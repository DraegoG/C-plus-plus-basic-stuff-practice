#include <stdio.h>

int main()
{
    int i;
    int a[5] = {1, 2, 3, 4, 5};		//"a" is a constant pointer to the array
    int *p = a;     // same as int*p = &a[0]
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a+i);	//Prints the address of each element of the array
    }
/*
    for (i = 0; i < 5; i++)
    {
        printf("%d", *p);
        p++;	//Note one thing that the value of "p" can be incremented as it is not constant
        		//But the value of "a"(of array) can't be incremented since it is constant
    			
    }
*/
    return 0;
}