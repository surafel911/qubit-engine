CFLAGS = -m64 -Wall -std=c99 -pthread -funroll-loops
BINARY = qubit
LIBBINARY = lib$(BINARY)
INCDIR = -I include/
LIBDIR :=
LIBRARIES = -lm
SOURCES = src/*.c
TEST = test/main.c

ifeq ($(OS),Windows_NT)
 CC = gcc
 BINARY :=  $(strip $(BINARY)).exe
 LIBBINARY := $(strip $(LIBBINARY)).dll
 MACROS = -D _CRT_SECURE_NO_WARNINGS
 TEST = test/main.c
 LIBRARIES += -lgdi32 -lopengl32 -luser32
 SOURCES += src/winapi/*.c
 MKDIR = New-Item -ItemType Directory -Force -Path bin/
 else
 CC = clang
 LIBBINARY := $(strip $(LIBBINARY)).so
 MACROS = -D GLAD_GLX_NO_X11
 INCDIR += -I /usr/include/
 LIBDIR += -L /usr/lib
 LIBRARIES += -l dl -l X11
 SOURCES += src/xlib/*.c
 MKDIR = mkdir -p bin/
endif

.PHONY: all test export clean

all: debug

prerequisite:
	$(shell $(MKDIR))

debug: prerequisite
	$(CC) -g $(CFLAGS) $(MACROS) \
	$(INCDIR) $(LIBDIR) $(SOURCES) $(LIBRARIES) \
	$(TEST) -o bin/$(BINARY)

test: prerequisite
	$(CC) -O3 $(CFLAGS) $(MACROS) \
	$(INCDIR) $(LIBDIR) $(SOURCES) $(LIBRARIES) \
	$(TEST) -o bin/$(BINARY)

export: prerequisite
	$(CC) -O3 -Werror --shared -fPIC $(CFLAGS) $(MACROS) \
	$(INCDIR) $(SOURCES) \
	-o bin/$(LIBBINARY)
