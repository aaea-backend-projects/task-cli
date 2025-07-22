#include <stdio.h>
#include <string.h>
#include "../src/utils.h"
#include "../src/task.h"

int test_show_usage() {
    char * expected = "./task-cli [action] [options]\n";
    char * output = show_usage();
    return (strcmp(output, expected) == 0)? 1 : 0;
}

int test_create_one_task() {
    task_t task = create_task();
    if(task.id == 1) {
        return 1;
    }
    return 0;
}

int main() {
    printf("==== STARTING TESTS FOR TASK-CLI ====\n");
    int total_tests = 2;
    int total_ok_tests = 0;

    test_fn(&test_show_usage);
    total_ok_tests++;

    test_fn(&test_create_one_task);
    total_ok_tests++;

    printf("==== END TESTS FOR TASK-CLI ====\n");
    printf("Passed %d of %d\n", total_ok_tests, total_tests);
}
