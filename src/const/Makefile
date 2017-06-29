OBJS=	const_sub.o const.o const noconst const.exec noconst.exec \
	elf_i386.diff \
	const_sub.o.nm const.nm const.a.nm noconst.nm noconst.a.nm \
	const.od noconst.od \
	const.od.rodata const.od.data noconst.od.rodata noconst.od.data \
	const_sub_local.o const_sub_local.o.nm const_local \
	const_b const_b.o const_sub_b.o const_sub_b.o.nm const_b2 const_b2.exec

all :	$(OBJS)

const_sub.o :	const_sub.c
	echo "% gcc -c const_sub.c -Wall" > const_sub.o.comp
	gcc -c const_sub.c -Wall >> const_sub.o.comp 2>&1
	echo "% " >> const_sub.o.comp

const.o :	const.c
	echo "% gcc -c const.c -Wall" > const.o.comp
	gcc -c const.c -Wall >> const.o.comp 2>&1

const :	const.o const_sub.o
	echo "% gcc const.o const_sub.o -Wall -o const" > const.comp
	gcc const.o const_sub.o -Wall -o const >> const.comp 2>&1
	echo "% " >> const.comp

noconst :	const.o const_sub.o
	echo "% gcc const.o const_sub.o -Wall -o noconst -T elf_x86_64.x.noconst" \
		> noconst.comp
	gcc const.o const_sub.o -Wall -o noconst -T elf_x86_64.x.noconst \
		>> noconst.comp 2>&1
	echo "% " >> noconst.comp

const.exec :	const
	echo "% ./const" > const.exec
	(./const 2>&1 | cat) >> const.exec &
	sleep 1
	echo "% " >> const.exec
	rm -f const.core

noconst.exec :	noconst
	echo "% ./noconst" > noconst.exec
	(./noconst 2>&1 | cat) >> noconst.exec &
	sleep 1
	echo "% " >> noconst.exec

elf_i386.diff :	elf_x86_64.x elf_x86_64.x.noconst
	diff -u elf_x86_64.x elf_x86_64.x.noconst > elf_i386.diff &
	sleep 1

const_sub.o.nm :	const_sub.o
	echo "% nm const_sub.o" > const_sub.o.nm
	nm const_sub.o >> const_sub.o.nm
	echo "% " >> const_sub.o.nm

const.nm :	const
	echo "% nm const" > const.nm
	nm const >> const.nm

const.a.nm :	const
	echo -n "0x" > const.a.nm
	nm const | grep " R a" | awk '{print $$1}' >> const.a.nm

noconst.nm :	noconst
	echo "% nm noconst" > noconst.nm
	nm noconst >> noconst.nm

noconst.a.nm :	noconst
	echo -n "0x" > noconst.a.nm
	nm noconst | grep " D a" | awk '{print $$1}' >> noconst.a.nm

const.od :	const
	echo "% objdump -h const" > const.od
	objdump -h const >> const.od

noconst.od :	noconst
	echo "% objdump -h noconst" > noconst.od
	objdump -h noconst >> noconst.od

const.od.rodata :	const
	echo -n "0x" > const.od.rodata
	objdump -h const | grep "\.rodata" | awk '{print $$4}' \
		>> const.od.rodata

const.od.data :	const
	echo -n "0x" > const.od.data
	objdump -h const | grep "\.data" | awk '{print $$4}' \
		>> const.od.data

noconst.od.rodata :	noconst
	echo -n "0x" > noconst.od.rodata
	objdump -h noconst | grep "\.rodata" | awk '{print $$4}' \
		>> noconst.od.rodata

noconst.od.data :	noconst
	echo -n "0x" > noconst.od.data
	objdump -h noconst | grep "\.data" | awk '{print $$4}' \
		>> noconst.od.data

const_sub_local.o :	const_sub.o
	echo "% objcopy --localize-symbol=a const_sub.o const_sub_local.o" \
		> const_sub_local.o.comp
	objcopy --localize-symbol=a const_sub.o const_sub_local.o
		>> const_sub_local.o.comp
	echo "% " >> const_sub_local.o.comp

const_sub_local.o.nm :	const_sub_local.o
	echo "% nm const_sub_local.o" > const_sub_local.o.nm
	nm const_sub_local.o >> const_sub_local.o.nm
	echo "% " >> const_sub_local.o.nm

const_local :	const.o const_sub_local.o
	echo "% gcc const.o const_sub_local.o -Wall -o const_local" \
		> const_local.comp
	(gcc const.o const_sub_local.o -Wall -o const_local 2>&1 | cat) \
		>> const_local.comp &
	sleep 1
	echo "% " >> const_local.comp
	touch const_local

const_b.o :	const_b.c
	echo "% gcc -c const_b.c -Wall" > const_b.o.comp
	gcc -c const_b.c -Wall >> const_b.o.comp 2>&1

const_b :	const_b.o const_sub.o
	echo "% gcc const_b.o const_sub.o -Wall -o const_b" > const_b.comp
	(gcc const_b.o const_sub.o -Wall -o const_b 2>&1 | cat) \
		>> const_b.comp &
	sleep 1
	echo "% " >> const_b.comp
	touch const_b

const_sub_b.o :	const_sub.o
	echo "% objcopy --redefine-sym a=b const_sub.o const_sub_b.o" \
		> const_sub_b.o.comp
	objcopy --redefine-sym a=b const_sub.o const_sub_b.o
		>> const_sub_b.o.comp
	echo "% " >> const_sub_b.o.comp

const_sub_b.o.nm :	const_sub_b.o
	echo "% nm const_sub_b.o" > const_sub_b.o.nm
	nm const_sub_b.o >> const_sub_b.o.nm
	echo "% " >> const_sub_b.o.nm

const_b2 :	const_b.o const_sub_b.o
	echo "% gcc const_b.o const_sub_b.o -Wall -o const_b2" > const_b2.comp
	gcc const_b.o const_sub_b.o -Wall -o const_b2 >> const_b2.comp 2>&1
	echo "% " >> const_b2.comp

const_b2.exec :	const_b2
	echo "% ./const_b2" > const_b2.exec
	(./const_b2 2>&1 | cat) >> const_b2.exec &
	sleep 1
	echo "% " >> const_b2.exec

clean :
	rm -f $(OBJS) *.comp *.out *.o

