#=======================================================================================================================
target_include_directories(${PROJECT_NAME} PUBLIC ..)
 target_precompile_headers(${PROJECT_NAME} PUBLIC public.hpp)
            target_sources(${PROJECT_NAME} PUBLIC file.cpp)
#=======================================================================================================================