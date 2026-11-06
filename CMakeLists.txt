cmake_minimum_required(VERSION 3.16)

# ĐƯỜNG DẪN ĐẾN THƯ MỤC GỐC XIAOZHI-ESP32 TRÊN MÁY CỦA BẠN
set(XIAOZHI_DIR "$ENV{HOME}/xiaozhi-esp32") 

set(EXTRA_COMPONENT_DIRS 
    "${XIAOZHI_DIR}/main"
    "${XIAOZHI_DIR}/components"
)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(my_xiaozhi_robot)
