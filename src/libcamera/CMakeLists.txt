include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
   ${CMAKE_SOURCE_DIR}/include
   ${CMAKE_SOURCE_DIR}/GL
)

add_library(camera STATIC camera.cpp)
