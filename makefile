main= main.c
CC = gcc
EXEC= main.exe
CFLAGS= -l:libWeb.a -L"." -lws2_32
all: $(EXEC)
$(EXEC): $(main)
	npm run build
	$(CC) $(main) -o $(EXEC) $(CFLAGS)