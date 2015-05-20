ifdef DEBUG
    C_FLAGS += -g
else
    C_FLAGS += -O3
endif

C_FLAGS += -DGRS_CFG_GROESTLCOIN=1
