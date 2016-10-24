#include "connectivity.h"

int test_connectivity() {
    int result = connectivity_status();
    return result == 1;
}