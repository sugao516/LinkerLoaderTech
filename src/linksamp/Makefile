OBJS=	compile linksamp link.exec \
	main.od lib1.od lib2.od linksamp.od \
	otherscr otherscr.out otherscr.od otherscr.ro \
	overwrite overwrite.out \
	addr addr.out addr.od addr.nm \
	lma lma.out lma.od lma.nm \
	conflict conflict.out conflict.od \
	valiable valiable.out valiable.od \
	fill fill.out fill.od

all :	$(OBJS)

compile :	main.c lib1.c lib2.c
	echo "% gcc -c main.c -Wall" >  compile.out
	gcc -c main.c -Wall >> compile.out 2>&1
	echo "% gcc -c lib1.c -Wall" >> compile.out
	gcc -c lib1.c -Wall >> compile.out 2>&1
	echo "% gcc -c lib2.c -Wall" >> compile.out
	gcc -c lib2.c -Wall >> compile.out 2>&1
	echo "% " >> compile.out

linksamp :	compile
	echo "% gcc main.o lib1.o lib2.o -Wall -o linksamp" > link.out
	gcc main.o lib1.o lib2.o -Wall -o linksamp >> link.out 2>&1
	echo "% " >> link.out

link.exec :	linksamp
	echo "% ./linksamp" > link.exec
	./linksamp >> link.exec 2>&1
	echo "% " >> link.exec

main.od :	linksamp
	echo "% objdump -h -p main.o" > main.od
	objdump -h -p main.o >> main.od 2>&1
	echo "% " >> main.od

lib1.od :	linksamp
	echo "% objdump -h -p lib1.o" > lib1.od
	objdump -h -p lib1.o >> lib1.od 2>&1
	echo "% " >> lib1.od

lib2.od :	linksamp
	echo "% objdump -h -p lib2.o" > lib2.od
	objdump -h -p lib2.o >> lib2.od 2>&1
	echo "% " >> lib2.od

linksamp.od :	linksamp
	echo "% objdump -h -p linksamp" > linksamp.od
	objdump -h -p linksamp >> linksamp.od 2>&1
	echo "% " >> linksamp.od

otherscr :	compile sample.lds
	echo "% gcc main.o lib1.o lib2.o -Wall -o otherscr -T sample.lds" > otherscr.comp 2>&1
	gcc main.o lib1.o lib2.o -Wall -o otherscr -T sample.lds >> otherscr.comp 2>&1
	echo "% "                                        >> otherscr.comp 2>&1

otherscr.out :	otherscr
	echo "% ./otherscr"                               > otherscr.out  2>&1
	./otherscr                                       >> otherscr.out  2>&1
	echo "% "                                        >> otherscr.out  2>&1

otherscr.od :	otherscr.comp
	echo "% objdump -h -p otherscr"                   > otherscr.od   2>&1
	objdump -h -p otherscr               >> otherscr.od   2>&1
	echo "% "                                        >> otherscr.od   2>&1

otherscr.ro :	otherscr.comp
	echo "% readelf -x 15 otherscr"                    > otherscr.ro   2>&1
	readelf -x 15 otherscr                            >> otherscr.ro   2>&1
	echo "% "                                        >> otherscr.ro   2>&1

overwrite :	overwrite.c
	echo "% gcc overwrite.c -o overwrite -Wall -T sample.lds" > overwrite.comp 2>&1
	gcc overwrite.c -o overwrite -Wall -T sample.lds >> overwrite.comp 2>&1
#	echo "% "                                        >> overwrite.comp 2>&1

overwrite.out :	overwrite
	echo "% ./overwrite"                              > overwrite.out  2>&1
	./overwrite                                      >> overwrite.out  2>&1
	echo "% "                                        >> overwrite.out  2>&1

addr :	addr.c addr.lds
	echo "% gcc addr.c -o addr -Wall -T addr.lds"     > addr.comp  2>&1
	gcc addr.c -o addr -Wall -T addr.lds             >> addr.comp  2>&1
	echo "% "                                        >> addr.comp  2>&1

addr.out :	addr
	echo "% ./addr"                                   > addr.out   2>&1
	./addr                                           >> addr.out   2>&1
	echo "% "                                        >> addr.out   2>&1

addr.od :	addr
	echo "% objdump -h -p addr"                       > addr.od    2>&1
	objdump -h -p addr | ./cut.pl                    >> addr.od    2>&1
	echo "% "                                        >> addr.od    2>&1

addr.nm :	addr
	echo "% nm addr"                                  > addr.nm    2>&1
	nm addr                               >> addr.nm    2>&1
	echo "% "                                        >> addr.nm    2>&1

lma :	addr.c lma.lds
	echo "% gcc addr.c -o lma -Wall -T lma.lds"       > lma.comp  2>&1
	gcc addr.c -o lma -Wall -T lma.lds               >> lma.comp  2>&1
	echo "% "                                        >> lma.comp  2>&1

lma.out :	lma
	echo "% ./lma"                                    > lma.out   2>&1
	./lma                                            >> lma.out   2>&1
	echo "% "                                        >> lma.out   2>&1

lma.od :	lma
	echo "% objdump -h -p lma"                        > lma.od    2>&1
	objdump -h -p lma | ./cut.pl                     >> lma.od    2>&1
	echo "% "                                        >> lma.od    2>&1

lma.nm :	lma
	echo "% nm lma"                                   > lma.nm    2>&1
	nm lma                              >> lma.nm    2>&1
	echo "% "                                        >> lma.nm    2>&1

conflict :	conflict.c conflict.lds
	echo "% gcc conflict.c -o conflict -Wall -T conflict.lds" > conflict.comp  2>&1
	gcc conflict.c -o conflict -Wall -T conflict.lds >> conflict.comp  2>&1
	echo "% "                                        >> conflict.comp  2>&1

conflict.out :	conflict
	echo "% ./conflict"                               > conflict.out   2>&1
	./conflict                                       >> conflict.out   2>&1
	echo "% "                                        >> conflict.out   2>&1

conflict.od :	conflict
	echo "% objdump -h -p conflict"                   > conflict.od    2>&1
	objdump -h -p conflict | ./cut.pl                >> conflict.od    2>&1
	echo "% "                                        >> conflict.od    2>&1

valiable :	valiable.c valiable.lds
	echo "% gcc valiable.c -o valiable -Wall -T valiable.lds" > valiable.comp  2>&1
	gcc valiable.c -o valiable -Wall -T valiable.lds >> valiable.comp  2>&1
	echo "% "                                        >> valiable.comp  2>&1

valiable.out :	valiable
	echo "% ./valiable"                               > valiable.out   2>&1
	./valiable                                       >> valiable.out   2>&1
	echo "% "                                        >> valiable.out   2>&1

valiable.od :	valiable
	echo "% objdump -h -p valiable"                   > valiable.od    2>&1
	objdump -h -p valiable | ./cut.pl                >> valiable.od    2>&1
	echo "% "                                        >> valiable.od    2>&1

fill :	fill.c fill.lds
	echo "% gcc fill.c -o fill -Wall -T fill.lds"     > fill.comp  2>&1
	gcc fill.c -o fill -Wall -T fill.lds             >> fill.comp  2>&1
	echo "% "                                        >> fill.comp  2>&1

fill.out :	fill
	echo "% ./fill"                                   > fill.out   2>&1
	./fill                                           >> fill.out   2>&1
	echo "% "                                        >> fill.out   2>&1

fill.od :	fill
	echo "% objdump -h -p fill"                       > fill.od    2>&1
	objdump -h -p fill | ./cut.pl                    >> fill.od    2>&1
	echo "% "                                        >> fill.od    2>&1

clean :
	rm -f $(OBJS) *.o *.out *.comp
