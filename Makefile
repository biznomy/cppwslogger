CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

export LD_LIBRARY_PATH=/usr/local/include/Poco
BINDIR = ./bin

OBJS =		CloudServer.o

LIBS = -I poco/ -L poco/lib/Linux/x86_64 \
	-lPocoFoundation \
	-lPocoUtil \
	-lPocoNet



TARGET =	$(BINDIR)/CloudServer

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
