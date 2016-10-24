#include "connectivity/connectivity.h"
#include "database/db.h"
#include "manager/manager_main.h"
#include <stdio.h>

int main() {
    int connected = test_connectivity();
    if (connected) {
        puts("Connection is up!");
    } else {
        puts("Connection is down!");
    }
    
    if (!db_connect()) {
        puts("Failed to connect to database.");
    } else {
        puts("Database connect successfully.");
        db_disconnect();
    }
    
    if (!file_thingy()) {
        puts("Failed to do that thing with that file.");
    } else {
        puts("Successfully completed the \"file thingy\"");
    }
    
    return 0;
}
