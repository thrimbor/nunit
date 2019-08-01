#include "nunit.h"
#include <stdarg.h>

void nunit_print (const char *str, ...)
{
    va_list args;
    va_start(args, str);
    vprintf(str, args);
    va_end(args);
}

NUNIT_DEFINE_GLOBALS

int main ()
{
    return nunit_run_tests();
}


//__attribute__((section("nunit_tests1$testaaa"))) nunit_test_t *__start_nunit_tests1 = NULL;
//__attribute__((section("nunit_tests1$testzzz"))) nunit_test_t *__stop_nunit_tests1 = NULL;