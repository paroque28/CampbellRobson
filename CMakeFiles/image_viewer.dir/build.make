# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/isaac/Documents/PAID/Tarea_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/isaac/Documents/PAID/Tarea_3

# Include any dependencies generated for this target.
include CMakeFiles/image_viewer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/image_viewer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/image_viewer.dir/flags.make

CMakeFiles/image_viewer.dir/src/main.cpp.o: CMakeFiles/image_viewer.dir/flags.make
CMakeFiles/image_viewer.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/isaac/Documents/PAID/Tarea_3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/image_viewer.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/image_viewer.dir/src/main.cpp.o -c /home/isaac/Documents/PAID/Tarea_3/src/main.cpp

CMakeFiles/image_viewer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/image_viewer.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/isaac/Documents/PAID/Tarea_3/src/main.cpp > CMakeFiles/image_viewer.dir/src/main.cpp.i

CMakeFiles/image_viewer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/image_viewer.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/isaac/Documents/PAID/Tarea_3/src/main.cpp -o CMakeFiles/image_viewer.dir/src/main.cpp.s

CMakeFiles/image_viewer.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/image_viewer.dir/src/main.cpp.o.requires

CMakeFiles/image_viewer.dir/src/main.cpp.o.provides: CMakeFiles/image_viewer.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/image_viewer.dir/build.make CMakeFiles/image_viewer.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/image_viewer.dir/src/main.cpp.o.provides

CMakeFiles/image_viewer.dir/src/main.cpp.o.provides.build: CMakeFiles/image_viewer.dir/src/main.cpp.o


# Object files for target image_viewer
image_viewer_OBJECTS = \
"CMakeFiles/image_viewer.dir/src/main.cpp.o"

# External object files for target image_viewer
image_viewer_EXTERNAL_OBJECTS =

image_viewer: CMakeFiles/image_viewer.dir/src/main.cpp.o
image_viewer: CMakeFiles/image_viewer.dir/build.make
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.9
image_viewer: /usr/local/lib/libboost_program_options.so
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.9
image_viewer: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.9
image_viewer: CMakeFiles/image_viewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/isaac/Documents/PAID/Tarea_3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable image_viewer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image_viewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/image_viewer.dir/build: image_viewer

.PHONY : CMakeFiles/image_viewer.dir/build

CMakeFiles/image_viewer.dir/requires: CMakeFiles/image_viewer.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/image_viewer.dir/requires

CMakeFiles/image_viewer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/image_viewer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/image_viewer.dir/clean

CMakeFiles/image_viewer.dir/depend:
	cd /home/isaac/Documents/PAID/Tarea_3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/isaac/Documents/PAID/Tarea_3 /home/isaac/Documents/PAID/Tarea_3 /home/isaac/Documents/PAID/Tarea_3 /home/isaac/Documents/PAID/Tarea_3 /home/isaac/Documents/PAID/Tarea_3/CMakeFiles/image_viewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/image_viewer.dir/depend

