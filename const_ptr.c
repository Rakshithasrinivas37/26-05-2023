//const int *ptr
/*#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    const int *ptr = &a;
    //*ptr = 20; -> Here, value to that pointer cannot be changed because *ptr is constant
    printf("ptr = %p and *ptr = %d\n", ptr, *ptr);
    
    ptr = &b; //We can assign new address to that pointer, because ptr is not constant
    printf("ptr = %p and *ptr = %d\n", ptr, *ptr);
    
    return 0;
}

//int * const ptr
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int * const ptr = &a;
    //ptr = &b; //We cannot assign new address to this pointer, because ptr is constant
    printf("ptr = %p and *ptr = %d\n", ptr, *ptr);
    
    *ptr = 20; //Here, value to this pointer can be changed because *ptr is not constant
    printf("ptr = %p and *ptr = %d\n", ptr, *ptr);
    
    return 0;
}*/

//const int * const ptr
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    const int * const ptr = &a;
    //ptr = &b; //We cannot assign new address to this pointer, because ptr is constant
    //*ptr = 20; //Here, value to this pointer cannot be changed because *ptr is constant
    printf("ptr = %p and *ptr = %d\n", ptr, *ptr);
    
    return 0;
}

