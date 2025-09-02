#include "GraphQueue_manager.h"
#include "DIALOG.h"

//Graph config

// Define the queue handle
QueueHandle_t GraphQueue;

void init_GraphQueue(void) {
    // Create a static queue
    GraphQueue = xQueueCreate(1, sizeof(struct WM_HWIN*));
}
