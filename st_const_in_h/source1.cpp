#include<stdio.h>
#include"header.h"
#include"functions.h"

namespace st_const_in_h
{

void TestSource1()
{
	printf("test1 %d address %08x\n", config::g_int0, &config::g_int0);
	printf("test1 %d address\n", config::g_int1);
}


}
