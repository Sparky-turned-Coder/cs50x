cc = clang
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c11 -g
LDFLAGS = -L/usr/local/lib
LDLIBS = -lcs50

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

