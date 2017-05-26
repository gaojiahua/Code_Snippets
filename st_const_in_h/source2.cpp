#include<stdio.h>
#include"header.h"
#include"functions.h"
namespace st_const_in_h
{
void TestSource2()
{
	printf("test2 %d address:%08x\n", config::g_int, &config::g_int);
}
}
