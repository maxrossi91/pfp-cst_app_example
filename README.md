# Example of how to use the `pfp-cst`
Mock example on how to use the [`pfp-cst`](https://github.com/maxrossi91/pfp-cst)

# Example
### Download

```console
git clone https://github.com/maxrossi91/pfp-cst_app_example
```

### Compile

```console
mkdir build
cd build; 
cmake ..
make
```

### Install (Optional)

```console
make install
```

This command will install the binaries to the default install location (e.g., `/usr/local/bin` for Ubuntu users). If the user wants the binary in some other custom location, this can be done using `cmake -DCMAKE_INSTALL_PERFIX=<dest> ..` instead of `cmake ..` in the compile sequence of commands, where `<dest>` is the preferred destination directory.

### Run

From the `build` directory.

```console
./_deps/pfp_cst-build/pfp-cst ../data/yeast.fasta -f
./app/cst_app ../data/yeast.fasta
```

### Implementation:

* [Massimiliano Rossi](https://github.com/maxrossi91)