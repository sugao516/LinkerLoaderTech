DIRS += ar binary checksym combine const constructor continue core \
	ctors duplicate edata elfread elfsamp hello \
	initialize layer ldscript link linker linksamp loader order pointer rasm \
	section setjmp shared stack tmp values weak

all :
	for d in ${DIRS}; do cd $$d ; $(MAKE)       ; cd .. ; done

clean :
	for d in ${DIRS}; do cd $$d ; $(MAKE) clean ; cd .. ; done
