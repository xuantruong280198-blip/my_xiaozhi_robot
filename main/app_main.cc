#include "board.h"
#include <esp_log.h>

extern "C" void app_main() {
    ESP_LOGI("AppMain", "Starting Custom External Xiaozhi Robot...");
    Board& board = Board::GetInstance();
    (void)board;
}
