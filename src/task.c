#include "task.h"

task_t create_task() {
    task_t t = {.id=1};
    return t;
}

task_t get_task(int id) {
    task_t t = {.id=id};
    return t;
    
}
