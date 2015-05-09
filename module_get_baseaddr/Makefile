# export LD_LIBRARY_PATH=/home/user/Documents/dyninst-8.0/build/lib:/home/user/Documents/dwarf-20150310/libdwarf/:/usr/local/lib:$LD_LIBRARY_PATH
# export DYNINSTAPI_RT_LIB=/home/user/Documents/dyninst-8.0/build/lib/libdyninstAPI_RT.so.8.0


DYNINST_INCLUDE := /home/user/Documents/dyninst-8.0/build/include
DYNINST_LIB := /home/user/Documents/dyninst-8.0/build/lib
BOOST_INCLUDE := /home/user/Documents/boost_1_57_0
BOOST_LIB := /home/user/Documents/boost_1_57_0
DWARF_INCLUDE := /home/user/Documents/dwarf-20150310/libdwarf
DWARF_LIB := /home/user/Documents/dwarf-20150310/libdwarf

INCFLAGS := -I $(DYNINST_INCLUDE) -I $(BOOST_INCLUDE) -I $(DWARF_INCLUDE)
LIBFLAGS := -L $(DYNINST_LIB) -L $(BOOST_LIB) -L $(DWARF_LIB)

CXXFLAGS := -c -g $(INCFLAGS)
LDFLAGS := $(INCFLAGS) $(LIBFLAGS) -Wl,--rpath-link=$(DYNINST_LIB)

EXECUTE := module_get_baseaddr
SOURCE := $(EXECUTE).cpp
OBJECT := $(EXECUTE).o

all: $(OBJECT) $(EXECUTE)

$(EXECUTE): $(OBJECT)
	$(CXX) $(LDFLAGS) -o $(EXECUTE) $(OBJECT) -ldyninstAPI -ldwarf

$(OBJECT): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(OBJECT) $(SOURCE)

clean:
	rm $(EXECUTE) $(OBJECT)
