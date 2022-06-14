# include
include_directories("${PROJECT_SOURCE_DIR}/single_method/inc")
# 子目录
aux_source_directory(. DIR_SRCS)
add_library(single_method_lib ${DIR_SRCS})



