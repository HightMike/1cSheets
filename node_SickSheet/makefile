
CFLAGS = -g -O0 -Wall
INCLUDES = -I./formCtrls/

DOCUMENT = document
FORM = form
REQUISIT = requisit

SICK_SHEET = node_SickSheet

all: ./obj/$(DOCUMENT).o ./obj/$(FORM).o ./obj/$(REQUISIT).o ./obj/$(SICK_SHEET).o
	date

clean:
	rm ./obj/*.o

./obj/$(DOCUMENT).o:
	g++ $(CFLAGS) -c $(DOCUMENT).cpp $(INCLUDES)
	mv $(DOCUMENT).o ./obj

./obj/$(FORM).o:
	g++ $(CFLAGS) -c $(FORM).cpp $(INCLUDES)
	mv $(FORM).o ./obj

./obj/$(REQUISIT).o:
	g++ $(CFLAGS) -c $(REQUISIT).cpp $(INCLUDES)
	mv $(REQUISIT).o ./obj

./obj/$(SICK_SHEET).o:
	g++ $(CFLAGS) -c $(SICK_SHEET).cpp $(INCLUDES)
	mv $(SICK_SHEET).o ./obj
