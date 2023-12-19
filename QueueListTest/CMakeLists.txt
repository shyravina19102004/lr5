file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_executable(${QueueListTest} ${srcs} ${hdrs})
target_link_libraries(${QueueListTest} ${QueueListLib} gtest)
