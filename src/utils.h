#ifndef UTILS_H
#define UTILS_H

#define TEST_OK(msg) "\x1b[32m" msg "\x1b[0m"
#define TEST_FUNC_OK(msg) printf("\x1b[32m%s OK\n\x1b[0m", msg)

/* utils for testing */
char * parse_function_name(char *raw_name);


void test_fn(int (*function_ptr)());

/* utils for app */

char * show_usage();

#endif
