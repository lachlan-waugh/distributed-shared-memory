#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dsm.h"
#include "sm.h"

int sm_node_init (int *argc, char **argv[], int *nodes, int *nid) {
    char *ip =   strndup(argv[0][1], NAME_LEN_MAX);
    char *port = strndup(argv[0][2], NAME_LEN_MAX);
    
    return 0;
}

void sm_node_exit (void) {
    return;
}

void *sm_malloc (size_t size) {
    // TODO
    return NULL;
}

void sm_barrier (void) {
    return;
}

void sm_bcast (void **addr, int root_nid) {\
    // TODO
    return;
}