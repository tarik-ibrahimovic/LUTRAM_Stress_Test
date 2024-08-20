# LUTRAM_Stress_Test
Generic test of FPGAs LUTRAM capacities

## Testing strategy
16x10 distributed RAM is generated in a loop, specifically so the number of outputs and inputs stay the same from the top level module, employing an output read mux, and input address decoder. This test is design to assess the LUTRAM capabilites of the different FPGA vendors, coupled with their own propriatary tools, using a generic test which hides away the vendor-specific primitives.

## Results
