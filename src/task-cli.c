#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"
#include "task.h"

int main(int argc, char *argv[]) {
    
    if(argc < 2) {
        printf("%s\n", show_usage());
        return 0;
    }
    char * action = argv[1];
    if(strcmp(action, "list") == 0) {
        
        if(argv[2] != NULL) {
            // try list one
            int id = atoi(argv[2]);
            if(id != 0) {
                task_t task = get_task(id);
                printf("task: id = %d\n", task.id);
            } else {
                printf("Bad input:\n");
            }
            return 0;
        } 

        // try print all

    }

    return 0;
}
