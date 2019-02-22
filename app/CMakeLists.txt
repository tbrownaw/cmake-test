add_library(external SHARED IMPORTED)
set_property(TARGET external PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/external/libexternal.so)

add_executable(app app.cc)

target_include_directories(app PUBLIC ${CMAKE_SOURCE_DIR}/external)

target_link_libraries(app LINK_PUBLIC hello external)
