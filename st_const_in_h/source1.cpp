#include<stdio.h>
#include"header.h"
#include"functions.h"

namespace st_const_in_h
{

void TestSource1()
{
	printf("test1 %d address:%08x\n", config::g_int, &config::g_int);
}


}
