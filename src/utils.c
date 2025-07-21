#include <stdio.h>
#include <execinfo.h> // for getting function name
#include <string.h>
#include <assert.h>
#include "utils.h"

/* for testing */

char * parse_function_name(char *raw_name) {
    //printf("Parsing: %s\n");
    char * tok = strtok(raw_name, "/");
    while((tok = strtok(NULL, "/")) != NULL) {

    int l = strlen(tok);
        if(tok[l-1] == ']') {
            //printf("tok %s\n", tok);
            break;
        }

    }

    char * function_name = strtok(tok, "(");
    //printf("tok %s\n", tok);
    function_name = strtok(NULL, "+");
    //printf("function name: %s\n", function_name);
    return function_name;
}

void test_fn(int (*function_ptr)()) {
    char * raw_function_name = backtrace_symbols((void*)&function_ptr, 1)[0];
    //printf("TESTING: %s\n", raw_function_name);
    assert(function_ptr());
    TEST_FUNC_OK(parse_function_name(raw_function_name));

}
/* for app */
char * show_usage() {
    return "./task-cli [action] [options]\n";
}
