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
CMAKE_SOURCE_DIR = C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ejercicios_pc1p.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ejercicios_pc1p.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ejercicios_pc1p.dir/flags.make

CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.obj: CMakeFiles/ejercicios_pc1p.dir/flags.make
CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.obj: ../retroceder_avanzar_hora.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ejercicios_pc1p.dir\retroceder_avanzar_hora.cpp.obj -c C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\retroceder_avanzar_hora.cpp

CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\retroceder_avanzar_hora.cpp > CMakeFiles\ejercicios_pc1p.dir\retroceder_avanzar_hora.cpp.i

CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\retroceder_avanzar_hora.cpp -o CMakeFiles\ejercicios_pc1p.dir\retroceder_avanzar_hora.cpp.s

# Object files for target ejercicios_pc1p
ejercicios_pc1p_OBJECTS = \
"CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.obj"

# External object files for target ejercicios_pc1p
ejercicios_pc1p_EXTERNAL_OBJECTS =

ejercicios_pc1p.exe: CMakeFiles/ejercicios_pc1p.dir/retroceder_avanzar_hora.cpp.obj
ejercicios_pc1p.exe: CMakeFiles/ejercicios_pc1p.dir/build.make
ejercicios_pc1p.exe: CMakeFiles/ejercicios_pc1p.dir/linklibs.rsp
ejercicios_pc1p.exe: CMakeFiles/ejercicios_pc1p.dir/objects1.rsp
ejercicios_pc1p.exe: CMakeFiles/ejercicios_pc1p.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ejercicios_pc1p.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ejercicios_pc1p.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ejercicios_pc1p.dir/build: ejercicios_pc1p.exe

.PHONY : CMakeFiles/ejercicios_pc1p.dir/build

CMakeFiles/ejercicios_pc1p.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ejercicios_pc1p.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ejercicios_pc1p.dir/clean

CMakeFiles/ejercicios_pc1p.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1 C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1 C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\cmake-build-debug C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\cmake-build-debug C:\Users\jatzu\OneDrive\Documentos\GitHub\ec1-Jatzumi\ejercicios_pc1\cmake-build-debug\CMakeFiles\ejercicios_pc1p.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ejercicios_pc1p.dir/depend

