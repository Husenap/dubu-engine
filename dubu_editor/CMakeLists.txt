set(target_name "dubu_editor")

set(src_precompiled
    "src/dubu_editor/precompiled.h")

set(src_dubu_editor
    "src/dubu_editor/main.cpp")

set(src_files
    ${src_precompiled}
    ${src_dubu_editor})

# Project
add_executable(${target_name} ${src_files})
set_target_properties(${target_name} PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(${target_name}
    compiler_features
    compiler_warnings
    dubu_engine)

target_include_directories(${target_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_precompile_headers(${target_name} PUBLIC ${src_precompiled})

source_group("src" FILES ${src_dubu_editor})
source_group("src/precompiled" FILES ${src_precompiled})
source_group("src/precompiled" REGULAR_EXPRESSION "cmake_pch\.[ch]xx")

set_target_properties(${target_name} PROPERTIES FOLDER ${${PROJECT_NAME}_FOLDER})