FIRMWARE_DIR = ../../firmware
HDL_DIR = ../../hdl
INCLUDE_DIR = ../../libraries
VERILOG_FILES = \
	$(HDL_DIR)/top16.v \
	$(HDL_DIR)/pll.v \
	$(HDL_DIR)/picosoc/memory/spimemio.v \
	$(HDL_DIR)/picosoc/uart/simpleuart.v \
	$(HDL_DIR)/picosoc/picosoc.v \
	$(HDL_DIR)/picorv32/picorv32.v \
	$(HDL_DIR)/picosoc/common/clock_divider.v \
	$(HDL_DIR)/picosoc/audio/audio.v \
	$(HDL_DIR)/picosoc/audio/pdm_dac.v \
	$(HDL_DIR)/picosoc/video/sprite_memory.v \
	$(HDL_DIR)/picosoc/video/texture_memory.v \
	$(HDL_DIR)/picosoc/video/tile_memory.v \
	$(HDL_DIR)/picosoc/video/sprite.v \
	$(HDL_DIR)/picosoc/video/VGASyncGen.v \
	$(HDL_DIR)/picosoc/video/video_vga.v \
        $(HDL_DIR)/picosoc/nunchuk/I2C_master.v \
	$(HDL_DIR)/picosoc/gpio/gpio.v \
	$(HDL_DIR)/picosoc/i2c/i2c.v \

PCF_FILE = $(HDL_DIR)/pins.pcf
LDS_FILE = $(FIRMWARE_DIR)/sections.lds
START_FILE = $(FIRMWARE_DIR)/start.S
C_FILES = main.c song_pacman.c \
	$(INCLUDE_DIR)/songplayer/songplayer.c \
	$(INCLUDE_DIR)/uart/uart.c \
  $(INCLUDE_DIR)/video/video.c \
	$(INCLUDE_DIR)/nunchuk/nunchuk.c
DEFINES = -Dgpio -Dvga -Di2c

include $(HDL_DIR)/tiny_soc.mk
