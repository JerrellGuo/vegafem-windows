include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
   ${CMAKE_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/../libmatrixIO
)

set(openglhelper_srcs
	openGLHelper.cpp
	printBitmap.cpp
	saveScreenShot.cpp
	)

add_library(openGLHelper   ${openglhelper_srcs})
target_link_libraries(openGLHelper matrixIO imageIO)
