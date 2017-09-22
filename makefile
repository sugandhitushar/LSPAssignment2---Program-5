objects = program.o
createDaemon: $(objects)
	gcc -o createDaemon $(objects)
$(objects): program.c program.h
	gcc -c program.c
.PHONY: clean run
clean:
	rm createDaemon $(objects) 
run:
	./createDaemon
usage:
	@echo make
	@echo make run
