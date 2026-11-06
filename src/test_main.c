#include <stdio.h>
#include <assert.h>
#include "calc.h"

void test_calc()
{
    assert(add(3,5) == 8);
    assert(subtract(10,4) == 6);

    printf("[test calc passed]\n");
}

int main(int argc, char *argv[])
{
    printf("[running tests]\n");
    test_calc();
    return 0;
}