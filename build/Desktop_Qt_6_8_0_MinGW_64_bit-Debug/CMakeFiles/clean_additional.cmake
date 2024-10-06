# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appTeslaQtTraining_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appTeslaQtTraining_autogen.dir\\ParseCache.txt"
  "appTeslaQtTraining_autogen"
  )
endif()
