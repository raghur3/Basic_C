//To call a function before the main(), pragma startup directive should be used. E.g.-
#pragma startup fun
void fun()
{
printf("In fun\n");
}
main()
{
printf("In main\n");
}



The output of the above program will be -
In fun
In main
This pragma directive, on the other hand, is compiler-dependent. This is not supported by gcc. As a result, it will ignore the startup directive and produce no error. But the output, in that case, will be -
In main
