# Install script for directory: /home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/src/ThirdParty/ecl/ecl_core/ecl_eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/install/ecl_eigen")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ecl" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/include/ecl/eigen.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ecl_eigen")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ecl_eigen")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/environment" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/environment" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_index/share/ament_index/resource_index/packages/ecl_eigen")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake/ecl_eigenExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake/ecl_eigenExport.cmake"
         "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/CMakeFiles/Export/8a00d6c7205c5329023456f4b53bd218/ecl_eigenExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake/ecl_eigenExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake/ecl_eigenExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/CMakeFiles/Export/8a00d6c7205c5329023456f4b53bd218/ecl_eigenExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen/cmake" TYPE FILE FILES
    "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_core/ecl_eigenConfig.cmake"
    "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/ament_cmake_core/ecl_eigenConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ecl_eigen" TYPE FILE FILES "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/src/ThirdParty/ecl/ecl_core/ecl_eigen/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/include/cmake_install.cmake")
  include("/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/license/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/abdulrafi/Desktop/ROS2_Final_Project/kobuki_ws/build/ecl_eigen/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
