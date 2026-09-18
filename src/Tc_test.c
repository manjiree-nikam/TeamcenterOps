#include <stdio.h>
#include <tc/tc.h>
#include <tc/emh.h>

// Login Program
int main(int argc, char *argv[])
{
    int ifail = ITK_ok;

    printf("Teamcenter ITK Test Program\n");

    ifail = ITK_init_module("infodba", "infodba", "dba");

    if (ifail != ITK_ok)
    {
        printf("Teamcenter login failed.\n");
        return ifail;
    }

    printf("Teamcenter login successful.\n");

    ITK_exit_module(TRUE);

    return ITK_ok;
}