#ifndef TASK_H
#define TASk_H


typedef struct {
    int id;
} task_t;

task_t create_task();
task_t get_task(int id);
task_t *get_all_tasks();
#endif
