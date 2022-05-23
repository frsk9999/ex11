all:
	g++ -o test test.cpp
	g++ -o test_other test_other.cpp
	gcc -c -o test_call_from_cpp.o test_call_from_cpp.c
	g++ -o test_call_from_cpp test_call_from_cpp.cpp test_call_from_cpp.o
	g++ -c -o test_candcpp.o test_candcpp.cpp 
	gcc -o test_candcpp test_candcpp.c test_candcpp.o -lstdc++ 
	g++ -c -o test2.o test2.cpp
	gcc -o test2 test2.c test2.o -lstdc++
	g++ -o test_namespace test_namespace.cpp
	g++ -o test_template test_template.cpp
	g++ -o test_attribute test_attribute.cpp
	g++ -o test_trycatch test_trycatch.cpp
	g++ -o test_newdel test_newdel.cpp
	g++ -o test_cons_dest test_cons_dest.cpp
	g++ -o test_overload test_overload.cpp
	g++ -o test_virtual test_virtual.cpp
	g++ -o test_virtual_if test_virtual_if.cpp
clean:
	rm test test_call_from_cpp.o test_call_from_cpp test_candcpp.o test_candcpp test2.o test2 test_other test_namespace test_template test_attribute test_trycatch test_newdel test_cons_dest test_overload test_virtual test_virtual_if
