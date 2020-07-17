SRC = main.c \
	gamemanager.c \
	sprites.c \
	ui/scoreboard.c \
	sprites/block.c \
	sprites/digit.c \
	tiles/block.c \
	tiles/digit.c

BIN = main.gb

OBJ = $(SRC:.c=.o)

CC	= ${GBDKDIR}/bin/lcc -Wa-l -Wl-m -Wl-j

all: $(BIN)

clean:
	rm $(OBJ) $(SRC:.c=.lst) $(SRC:.c=.sym)

$(BIN): $(OBJ)
	$(CC) -Wl-yt2 -Wl-yo4 -Wl-ya4 -o $@ $(OBJ)

%.o:	%.c
	$(CC) -c -o $@ $<
