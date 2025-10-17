# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AplicatieLogin_autogen"
  "CMakeFiles\\AplicatieLogin_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AplicatieLogin_autogen.dir\\ParseCache.txt"
  )
endif()
