page/wasm/parse_and_run.wasm: src/parse_and_run.c page/wasm
	clang --target=wasm32 --no-standard-libraries -Wl,--export-all -Wl,--no-entry -o page/wasm/parse_and_run.wasm src/parse_and_run.c

page/wasm: 
	mkdir page/wasm