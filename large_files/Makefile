# from internet
# overriden by zero
# of course we can make it better, but too advanced

LIBS=libs/connectivity libs/database libs/manager
INCLUDE_PATH=libs/
CC=gcc

# -I use for directory that help gcc search paths if need it
cli_exec: libraries
	$(CC) cli/main.c $(wildcard libraries/*) -I$(INCLUDE_PATH) -o output

# after this loop we will have a bunch of .o file in libraries directory
libraries:
	mkdir libraries/
	for dir in $(LIBS); do \
		cd $$dir; \
		$(CC) -c *.c -I../; \
		mv *.o ../../libraries; \
		cd -; \
	done

clean:
	rm -rf libraries/ output
