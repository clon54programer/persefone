set name_executable= Persefone

set dependecy= -lraylib -lopengl32 -lgdi32

set main_function= src\main.cpp


g++ -o %name_executable% %main_function% %dependecy%