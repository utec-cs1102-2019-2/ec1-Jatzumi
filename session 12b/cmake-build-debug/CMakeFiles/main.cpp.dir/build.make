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
CMAKE_SOURCE_DIR = "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/main.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.cpp.dir/flags.make

CMakeFiles/main.cpp.dir/Mascota.cpp.obj: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Mascota.cpp.obj: ../Mascota.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.cpp.dir/Mascota.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.cpp.dir\Mascota.cpp.obj -c "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\Mascota.cpp"

CMakeFiles/main.cpp.dir/Mascota.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Mascota.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\Mascota.cpp" > CMakeFiles\main.cpp.dir\Mascota.cpp.i

CMakeFiles/main.cpp.dir/Mascota.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Mascota.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\Mascota.cpp" -o CMakeFiles\main.cpp.dir\Mascota.cpp.s

# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles/main.cpp.dir/Mascota.cpp.obj"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

main.cpp.exe: CMakeFiles/main.cpp.dir/Mascota.cpp.obj
main.cpp.exe: CMakeFiles/main.cpp.dir/build.make
main.cpp.exe: CMakeFiles/main.cpp.dir/linklibs.rsp
main.cpp.exe: CMakeFiles/main.cpp.dir/objects1.rsp
main.cpp.exe: CMakeFiles/main.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main.cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.cpp.dir/build: main.cpp.exe

.PHONY : CMakeFiles/main.cpp.dir/build

CMakeFiles/main.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.cpp.dir/clean

CMakeFiles/main.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b" "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b" "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\cmake-build-debug" "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\cmake-build-debug" "C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\session 12b\cmake-build-debug\CMakeFiles\main.cpp.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/main.cpp.dir/depend

