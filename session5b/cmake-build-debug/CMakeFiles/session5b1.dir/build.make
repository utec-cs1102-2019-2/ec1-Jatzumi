# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/session5b1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/session5b1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/session5b1.dir/flags.make

CMakeFiles/session5b1.dir/ejercicio1.cpp.obj: CMakeFiles/session5b1.dir/flags.make
CMakeFiles/session5b1.dir/ejercicio1.cpp.obj: ../ejercicio1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/session5b1.dir/ejercicio1.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\session5b1.dir\ejercicio1.cpp.obj -c C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\ejercicio1.cpp

CMakeFiles/session5b1.dir/ejercicio1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session5b1.dir/ejercicio1.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\ejercicio1.cpp > CMakeFiles\session5b1.dir\ejercicio1.cpp.i

CMakeFiles/session5b1.dir/ejercicio1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session5b1.dir/ejercicio1.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\ejercicio1.cpp -o CMakeFiles\session5b1.dir\ejercicio1.cpp.s

# Object files for target session5b1
session5b1_OBJECTS = \
"CMakeFiles/session5b1.dir/ejercicio1.cpp.obj"

# External object files for target session5b1
session5b1_EXTERNAL_OBJECTS =

session5b1.exe: CMakeFiles/session5b1.dir/ejercicio1.cpp.obj
session5b1.exe: CMakeFiles/session5b1.dir/build.make
session5b1.exe: CMakeFiles/session5b1.dir/linklibs.rsp
session5b1.exe: CMakeFiles/session5b1.dir/objects1.rsp
session5b1.exe: CMakeFiles/session5b1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable session5b1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\session5b1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/session5b1.dir/build: session5b1.exe

.PHONY : CMakeFiles/session5b1.dir/build

CMakeFiles/session5b1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\session5b1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/session5b1.dir/clean

CMakeFiles/session5b1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\cmake-build-debug C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\cmake-build-debug C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session5b\cmake-build-debug\CMakeFiles\session5b1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/session5b1.dir/depend

