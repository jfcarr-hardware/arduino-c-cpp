ARD = arduino-cli
C_SKETCH = CTest
C_SKETCH_SRC = CTest/CTest.ino
CPP_SKETCH = CppTest
CPP_SKETCH_SRC = CppTest/CppTest.ino
EDITOR = gvim
FORMATTER = clang-format -i
PORT = /dev/ttyACM0
FQBN = arduino:avr:uno
CORE = arduino:avr

default:
	@echo 'Targets:'
	@echo '  c-c   -- Compile the C sketch.'
	@echo '  e-c   -- Edit the C sketch.'
	@echo '  f-c   -- Format the C sketch.'
	@echo '  u-c   -- Upload the C sketch.'
	@echo '  c-cpp -- Compile the CPP sketch.'
	@echo '  e-cpp -- Edit the CPP sketch.'
	@echo '  f-cpp -- Format the CPP sketch.'
	@echo '  u-cpp -- Upload the CPP sketch.'

c-c:
	$(ARD) compile --fqbn $(FQBN) $(C_SKETCH)

e-c:
	$(EDITOR) $(C_SKETCH_SRC)

f-c:
	$(FORMATTER) $(C_SKETCH_SRC)

u-c: c-c
	$(ARD) upload -p $(PORT) --fqbn $(FQBN) $(C_SKETCH)

c-cpp:
	$(ARD) compile --fqbn $(FQBN) $(CPP_SKETCH)

e-cpp:
	$(EDITOR) $(CPP_SKETCH_SRC)

f-cpp:
	$(FORMATTER) $(CPP_SKETCH_SRC)

u-cpp: c-cpp
	$(ARD) upload -p $(PORT) --fqbn $(FQBN) $(CPP_SKETCH)
