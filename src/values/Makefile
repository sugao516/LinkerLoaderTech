OBJS=	values values.out values_sub.o values_nm.out values_c.out \
	values_sub_nm.out objdump.out strip.out

all :	$(OBJS)

values :	values.c values_sub.o
	echo "% gcc values.c values_sub.o -o values" > values-comp.out
	gcc values.c values_sub.o -o values >> values-comp.out 2>&1
	echo "% " >> values-comp.out

values.out :	values
	echo "% ./values" > values.out
	./values >> values.out
	echo "% " >> values.out

values_sub.o :	values_sub.c
	echo "% gcc -c values_sub.c" > values_sub.out
	gcc -c values_sub.c >> values_sub.out 2>&1
	echo "% ls values_sub.o" >> values_sub.out
	ls values_sub.o >> values_sub.out 2>&1
	echo "% " >> values_sub.out

values_nm.out :	values
	echo "% nm values" > values_nm.out
	nm values >> values_nm.out
	echo "% " >> values_nm.out

values_c.out:   \
values_i1.out   \
values_i2.out   \
values_p1.out   \
values_str.out  \
values_si1.out  \
values_si2.out  \
values_ci0.out  \
values_i0.out   \
values_p0.out   \
values_si0.out  \
values_ci1.out  \
values_ci2.out  \
values_main.out \
values_func.out

values_c.out    \
values_i1.out   \
values_i2.out   \
values_p1.out   \
values_str.out  \
values_si1.out  \
values_si2.out  \
values_ci0.out  \
values_i0.out   \
values_p0.out   \
values_si0.out  \
values_ci1.out  \
values_ci2.out  \
values_main.out \
values_func.out \
: values_nm.out
	cat values_nm.out | grep "`awk -F "\t" '$$1=="$@"{ print $$2 }' values_nm.txt`" > $@

values_sub_nm.out :	values_sub.o
	echo "% nm values_sub.o" > values_sub_nm.out
	nm values_sub.o >> values_sub_nm.out
	echo "% " >> values_sub_nm.out

objdump.out :	values
	echo "% objdump -h values" > objdump.out
	objdump -h values >> objdump.out

strip.out :	values objdump.out values.out
	mv values values.bak
	cp values.bak values
	echo "% ls -l values" > strip.out
	ls -l values >> strip.out
	echo "% file values" >> strip.out
	file values >> strip.out
	echo "% strip values" >> strip.out
	strip values >> strip.out
	echo "% ls -l values" >> strip.out
	ls -l values >> strip.out
	echo "% file values" >> strip.out
	file values >> strip.out
	echo "% nm values" >> strip.out
	nm values >> strip.out 2>&1
	mv values.bak values

clean :
	rm -f $(OBJS) *.o *.out

