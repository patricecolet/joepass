
all: j2

j2: j2.c
	${CC} ${CFLAGS} -DJ2_STANDALONE -o j2 j2.c

j2anim: j2anim.c
	${CC} ${CFLAGS} -o j2anim j2anim.c

clean:
	-rm -f j2 *.o
	
realclean:
	-rm -f j2 *.o
	-rm -f j2anim
	
	
install:
	if [ -d /opt/j2/bin ]; then set +x; \
	else (set -x; mkdirhier /opt/j2/bin); fi
	bsdinst -c -s j2 /opt/j2/bin
	if [ -d /opt/j2/man/man1 ]; then set +x; \
	else (set -x; mkdirhier /opt/j2/man/man1); fi	
	bsdinst -c -m 0644 j2.man /opt/j2/man/man1/j2.1
	
