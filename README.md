# LUTRAM_Stress_Test
Generic test of FPGAs LUTRAM capacities

## Testing strategy
16x10 distributed RAM is generated in a loop, specifically so the number of outputs and inputs stay the same from the top level module, employing an output read mux, and input address decoder. This test is design to assess the LUTRAM capabilites of the different FPGA vendors, coupled with their own propriatary tools, using a generic test which hides away the vendor-specific primitives.

## Results
# Gowin GW2AR-18C
Tool settings: Placer-1 priority to routability, Router-0 default, max fanout 23

Synthesis maximum numbers:

    - 314 modules instantiated
    - Logic elements 15058/20736
        - 11170 LUT
        - 648 RAM16S4 SSRAM
    - 15680/15750 DFF
    Error: Failed to place 10767 REG(s)

PnR included maximum numbers:

    - 255 modules instantiated
    - Logic elements 10346/20736
        - 6458 LUT
        - 648 RAM16S4 SSRAM
    - 8000/15750 DFF
    Error: Failed to place 145 REG(s)


# CologneChip CCGM1A1 
Tool settings: om-3 (speed), tm-3(worst timing), 
<!-- Synthesis maximum numbers:
    - 100 modules instantiated
    - Logic elements 15058/20480
        - 11170 LUT
        - 648 RAM16S4 SSRAM
    - 15680/15750 DFF
Error: Failed to place 10767 REG(s) -->

PnR included maximum numbers:

    - 24 modules instantiated
    - Logic elements 2255/20480
    - 1600/15750 DFF
    FATAL ERROR: CPE_OUTMUX congestion at Component 333 with 353


