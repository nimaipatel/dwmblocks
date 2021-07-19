PREFIX ?= /usr/local
CC ?= cc
LDFLAGS = -lX11

output: dwmblocks.c blocks.def.h blocks.h
	${CC}  dwmblocks.c $(LDFLAGS) -o dwmblocks
blocks.h:
	cp blocks.def.h $@


clean:
	rm -f *.o *.gch dwmblocks blocks.h
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	mkdir -p $(DESTDIR)$(PREFIX)/share/dwmblocks
	install -m 0755 dwmblocks $(DESTDIR)$(PREFIX)/bin/dwmblocks
	cp -f scripts/* $(DESTDIR)$(PREFIX)/share/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks
	rm -rf $(DESTDIR)$(PREFIX)/share/dwmblocks
