SRCS = main.c power.c
OBJECT = power.o 
TARGET = LINKER 

$(TARGET) : $(OBJECT) libmine.a
	$(CC) main.c -o $(TARGET)  $(OBJECT) -lmine -L.

libmine.a : $(OBJECT)
	ar rs libmine.a power.o

clean : 
	rm -f $(OBJECT) $(TARGET) libmine.a 
main.o : main.c
power.o : power.c

