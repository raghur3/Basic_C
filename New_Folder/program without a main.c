Yes, we can compile a program without main() function Using Macro.
E.g.
#include<studio.h>
#define abc main
int abc ()
{
printf("Hello World ");
return 0;
}
