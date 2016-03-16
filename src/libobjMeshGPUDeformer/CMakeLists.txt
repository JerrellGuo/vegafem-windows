include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_SOURCE_DIR}/include
	${CMAKE_SOURCE_DIR}/GL
	)

set(objmeshbgpudeformer_srcs
	objMeshGPUDeformer.cpp
	objMeshGPUDeformer_coarseToFine.cpp
	objMeshGPUDeformer_coarseToFine_fbo.cpp
	objMeshGPUDeformer_uUq.cpp
	objMeshGPUDeformer_uUq_fbo.cpp
	objMeshGPUDeformer_uUq_pbuffer.cpp
	objMeshGPUDeformer_uUq_setLighting.cpp
	vbo.cpp
	)

add_library(objMeshGPUDeformer   ${objmeshbgpudeformer_srcs})
target_link_libraries(objMeshGPUDeformer objMesh lighting)
