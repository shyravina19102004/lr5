file(GLOB hdrs "*.h*") 
file(GLOB srcs "*.cpp")

add_library(${QueueListLib} STATIC ${srcs} ${hdrs})


