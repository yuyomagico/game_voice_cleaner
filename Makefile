all:
	clear
	mkdir -p build/
	gcc src/simple_client.c -o build/simple_client	
client:
	src/simple_client
astyle:
	astyle --recursive --style=gnu --indent=tab *.c

