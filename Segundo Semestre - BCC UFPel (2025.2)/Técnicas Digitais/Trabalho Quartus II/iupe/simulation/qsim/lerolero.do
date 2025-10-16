onerror {quit -f}
vlib work
vlog -work work lerolero.vo
vlog -work work lerolero.vt
vsim -novopt -c -t 1ps -L cycloneiv_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.turtle_vlg_vec_tst
vcd file -direction lerolero.msim.vcd
vcd add -internal turtle_vlg_vec_tst/*
vcd add -internal turtle_vlg_vec_tst/i1/*
add wave /*
run -all
