SOURCE_FILES=src/main.cpp

main:
	[ ! -d "build" ] && mkdir build; \
	g++ -o build/main $(SOURCE_FILES)

clean:
	rm -rf build
