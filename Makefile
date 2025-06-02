all: 01_test_serial_link/test_serial_link 02_test_zmq_link/test_zmq_link

01_test_serial_link/test_serial_link:
	make -C "01_test_serial_link"

02_test_zmq_link/test_zmq_link:
	make -C "02_test_zmq_link"

clean:
	make clean -C "./01_test_serial_link"
	make clean -C "./02_test_zmq_link"