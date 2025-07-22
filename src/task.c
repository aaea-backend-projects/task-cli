#include <stdlib.h>
#include "task.h"

task_t create_task() {
    task_t t = {.id=1};
    return t;
}

task_t get_task(int id) {
    task_t t = {.id=id};
    return t;
    
}

task_t * get_all_tasks() {
    task_t *t= malloc(sizeof(task_t) * 2);
    t[0].id = 1;
    t[1].id = 2;
    return t;
    
}
