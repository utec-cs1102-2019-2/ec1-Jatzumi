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
CMAKE_SOURCE_DIR = C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ejercicios_pc2_e7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ejercicios_pc2_e7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ejercicios_pc2_e7.dir/flags.make

CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.obj: CMakeFiles/ejercicios_pc2_e7.dir/flags.make
CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.obj: ../ejercicio12.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ejercicios_pc2_e7.dir\ejercicio12.cpp.obj -c C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\ejercicio12.cpp

CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\ejercicio12.cpp > CMakeFiles\ejercicios_pc2_e7.dir\ejercicio12.cpp.i

CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\ejercicio12.cpp -o CMakeFiles\ejercicios_pc2_e7.dir\ejercicio12.cpp.s

# Object files for target ejercicios_pc2_e7
ejercicios_pc2_e7_OBJECTS = \
"CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.obj"

# External object files for target ejercicios_pc2_e7
ejercicios_pc2_e7_EXTERNAL_OBJECTS =

ejercicios_pc2_e7.exe: CMakeFiles/ejercicios_pc2_e7.dir/ejercicio12.cpp.obj
ejercicios_pc2_e7.exe: CMakeFiles/ejercicios_pc2_e7.dir/build.make
ejercicios_pc2_e7.exe: CMakeFiles/ejercicios_pc2_e7.dir/linklibs.rsp
ejercicios_pc2_e7.exe: CMakeFiles/ejercicios_pc2_e7.dir/objects1.rsp
ejercicios_pc2_e7.exe: CMakeFiles/ejercicios_pc2_e7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ejercicios_pc2_e7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ejercicios_pc2_e7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ejercicios_pc2_e7.dir/build: ejercicios_pc2_e7.exe

.PHONY : CMakeFiles/ejercicios_pc2_e7.dir/build

CMakeFiles/ejercicios_pc2_e7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ejercicios_pc2_e7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ejercicios_pc2_e7.dir/clean

CMakeFiles/ejercicios_pc2_e7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2 C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2 C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\cmake-build-debug C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\cmake-build-debug C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc2\cmake-build-debug\CMakeFiles\ejercicios_pc2_e7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ejercicios_pc2_e7.dir/depend

