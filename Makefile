all:
	clear
	mkdir -p build/
	gcc src/simple_client.c -o build/simple_client	`pkg-config --cflags --libs jack`
	gcc src/metro.c -o build/metro	`pkg-config --cflags --libs jack`
client:
	build/simple_client
metro:
	build/metro -b 60
astyle:
	astyle --recursive --style=gnu --indent=tab *.c

