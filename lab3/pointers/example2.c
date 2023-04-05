int a = 1;
int * pointer_to_a = &a;

a += 1;

*pointer_to_a += 1;

printf("The value of a is also %d\n", *pointer_to_a);
