CFLAGS = -m64 -Wall -Werror -std=c99 -pthread -funroll-loops
BINARY = qubit
LIBBINARY = lib$(BINARY)
INCDIR = -I include/
LIBDIR =
LIBRARIES = -lm
SOURCES = src/*.c
TEST = test/main.c

ifeq ($(OS),Windows_NT)
 CC = gcc
 BINARY :=  $(strip $(BINARY)).exe
 LIBBINARY := $(strip $(LIBBINARY)).dll
 MACROS = -D_CRT_SECURE_NO_WARNINGS
TEST = test/main.c
 LIBRARIES += -lgdi32 -lopengl32 -luser32
 SOURCES += src/winapi/*.c
 else
 CC = clang
 LIBBINARY := $(strip $(LIBBINARY)).so
 MACROS = -DGLAD_GLX_NO_X11
 INCDIR += -I /usr/include/
 LIBDIR += -L /usr/lib
 LIBRARIES += -l dl -l X11
 SOURCES += src/xlib/*.c
endif

.PHONY: all test export clean

all: debug

debug:
	$(CC) -g $(CFLAGS) $(MACROS) $(INCDIR) $(LIBDIR) $(SOURCES) $(LIBRARIES) \
	$(TEST) -o bin/$(BINARY)

test:
	$(CC) -s -O3 $(CFLAGS) $(MACROS) $(INCDIR) $(LIBDIR) $(SOURCES) $(LIBRARIES) \
	$(TEST) -o bin/$(BINARY)

export:
	$(CC) -O3 --shared $(CFLAGS) $(INCDIR) $(LIBDIR) $(SOURCES) $(LIBRARIES) \
	-o bin/$(LIBBINARY)
