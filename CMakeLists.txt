cmake_minimum_required(VERSION 3.16)

# Tự động nhận diện đường dẫn xiaozhi-esp32 theo môi trường
if(DEFINED ENV{GITHUB_WORKSPACE})
    # Trên GitHub Actions, repo gốc được clone ra thư mục song song (parent directory)
    set(XIAOZHI_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../xiaozhi-esp32")
else()
    # Trên máy tính cá nhân của bạn
    set(XIAOZHI_DIR "$ENV{HOME}/xiaozhi-esp32")
endif()

# Khai báo các thư mục chứa component cốt lõi từ repo gốc và mã nguồn riêng của bạn
set(EXTRA_COMPONENT_DIRS 
    "${XIAOZHI_DIR}/main"
    "${XIAOZHI_DIR}/components"
    "${CMAKE_CURRENT_SOURCE_DIR}/main"
)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(my_xiaozhi_robot)
