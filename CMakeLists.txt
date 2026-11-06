cmake_minimum_required(VERSION 3.16)

# Tự động tìm thư mục xiaozhi-esp32 dù ở máy cá nhân hay trên GitHub Actions
if(DEFINED ENV{GITHUB_WORKSPACE})
    set(XIAOZHI_DIR "$ENV{GITHUB_WORKSPACE}/xiaozhi-esp32")
else()
    set(XIAOZHI_DIR "$ENV{HOME}/xiaozhi-esp32")
endif()

set(EXTRA_COMPONENT_DIRS 
    "${XIAOZHI_DIR}/main"
    "${XIAOZHI_DIR}/components"
)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(my_xiaozhi_robot)
