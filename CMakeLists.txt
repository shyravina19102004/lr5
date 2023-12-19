file(GLOB hdrs "*.h*") 
file(GLOB srcs "*.cpp")

add_executable(${QueueList} ${srcs} ${hdrs}) 
target_link_libraries(${QueueList} ${QueueListLib}) 


