cmake_minimum_required(VERSION 3.21)
project(design_method)
set(CMAKE_CXX_STANDARD 20)

# include
include_directories("${PROJECT_SOURCE_DIR}/factory_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/builder_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/prototype_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/single_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/bridge_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/decorator_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/proxy_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/chain_procedure_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/command_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/observer_method/inc")
include_directories("${PROJECT_SOURCE_DIR}/state_method/inc")


# 子目录
add_subdirectory(factory_method/src)
add_subdirectory(builder_method/src)
add_subdirectory(single_method/src)

# 设置源码库
set(EXTRA_LIBS ${EXTRA_LIBS} factory_method_lib)
set(EXTRA_LIBS ${EXTRA_LIBS} builder_method_lib)
set(EXTRA_LIBS ${EXTRA_LIBS} single_method_lib)

# 选择main函数
#add_executable(${PROJECT_NAME} test/factory_method_main.cpp)
#add_executable(${PROJECT_NAME} test/builder_method_main.cpp)
#add_executable(${PROJECT_NAME} test/prototype_main.cpp)
#add_executable(${PROJECT_NAME} test/single_main.cpp)
#add_executable(${PROJECT_NAME} test/bridge_method_main.cpp)
#add_executable(${PROJECT_NAME} test/decorator_method_main.cpp)
#add_executable(${PROJECT_NAME} test/proxy_method_main.cpp)
#add_executable(${PROJECT_NAME} test/chain_procedure_method_main.cpp)
#add_executable(${PROJECT_NAME} test/command_method_main.cpp)
#add_executable(${PROJECT_NAME} test/observer_method_main.cpp)
add_executable(${PROJECT_NAME} test/state_method_main.cpp)


# 连接库
target_link_libraries(${PROJECT_NAME} ${EXTRA_LIBS})