cmake_minimum_required (VERSION 3.22.0)
project ("Task_92")

set(
	Source_files
	source_files/Equilateral_Triangle.cpp
	source_files/Figure.cpp
	source_files/Isosceles_Triangle.cpp
	source_files/Parallelogram.cpp
	source_files/Quardrangle.cpp
	source_files/Rect.cpp
	source_files/Rhombus.cpp
	source_files/Rigth_Triangle.cpp
	source_files/Square.cpp
	source_files/Triangle.cpp
	source_files/task_53.cpp
)

set(
	header_files
	header_files/Equilateral_Triangle.h
	header_files/Figure.h
	header_files/Isosceles_Triangle.h
	header_files/Parallelogram.h
	header_files/Quardrangle.h
	header_files/Rect.h
	header_files/Rhombus.h
	header_files/Rigth_Triangle.h
	header_files/Square.h
	header_files/Triangle.h
)

add_executable (Task_92 ${Source_files} ${header_files})
