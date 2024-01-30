TARGETS	=	project

all:	$(TARGETS)

project:	ProjectTestDriver.o Student.o  Course.o Taken.o DynArray.o StatArray.o School.o Control.o View.o
	g++ -o project ProjectTestDriver.o Student.o Course.o Taken.o DynArray.o StatArray.o School.o Control.o View.o

ProjectTestDriver.o:	ProjectTestDriver.cc Student.h  Course.h Taken.h DynArray.h StatArray.h School.h Control.h View.h
	g++ -c ProjectTestDriver.cc

Student.o: Student.cc Student.h
	g++ -c Student.cc

Course.o: Course.cc Course.h
	g++ -c Course.cc

Taken.o: Taken.cc Taken.h
	g++ -c Taken.cc

DynArray.o: DynArray.cc DynArray.h
	g++ -c DynArray.cc

StatArray.o: StatArray.cc StatArray.h
	g++ -c StatArray.cc

School.o: School.cc School.h
	g++ -c School.cc

Control.o: Control.cc Control.h
	g++ -c Control.cc

View.o: View.cc View.h
		g++ -c View.cc

clean:
	rm -f *.o project
