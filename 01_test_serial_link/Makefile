CXX = g++
CC = gcc

LIB_DIR = ../lib
# =====================================================================================================================




# ==== kato source file ===============================================================================================
KATO_HEADERS = $(LIB_DIR)/kato/function.hpp $(LIB_DIR)/kato/log.hpp
KATO_CXXFLAGS = -I$(LIB_DIR)
# ==== kato source file ===============================================================================================




# ==== link source file ===============================================================================================
LINK_HEADERS = $(LIB_DIR)/link/serial_link.hpp
LINK_CXXFLAGS = -I$(LIB_DIR)
# ==== link source file ===============================================================================================




# ==== test source files ==============================================================================================
TEST_EXE = test_serial_link
TEST_SOURCES = main.cpp
TEST_OBJS = $(addprefix ., $(addsuffix .o, $(basename $(notdir $(TEST_SOURCES)))))
# ==== test source files ==============================================================================================




# ==== gcc flags ======================================================================================================
CXXFLAGS = -Wall -Wextra -Wunused -Wformat -O3 -pthread
CXXFLAGS += $(LINK_CXXFLAGS)
CXXFLAGS += $(KATO_CXXFLAGS)

LIBS = -lpthread

CFLAGS = $(CXXFLAGS)
CFLAGS_STD = $(CFLAGS) -std=c17
CXXFLAGS_STD = $(CXXFLAGS) -std=c++17
# ==== gcc flags ======================================================================================================




# ==== build rules ====================================================================================================
.%.o: %.cpp
	$(CXX) $(CXXFLAGS_STD) -c -o $@ $<

all: $(TEST_EXE)
	@echo Build complete

$(TEST_EXE): $(TEST_OBJS) $(LINK_HEADERS) $(KATO_HEADERS)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

clean_test:
	rm -f $(TEST_EXE) $(TEST_OBJS)

clean: clean_test
# ==== build rules ====================================================================================================
