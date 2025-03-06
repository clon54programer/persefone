set name_executable= Persefone

set dependecy= -lraylib -lopengl32 -lgdi32

set main_function= src\main.cpp

set flags= -Iinclude\

g++ -c -o Camera.o src\Camera.cpp %flags%
g++ -c -o Player.o src\Player.cpp %flags%


set source= Player.o Camera.o


g++ -o %name_executable% %main_function%  %source%  %dependecy% %flags%