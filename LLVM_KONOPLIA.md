Welcome to LLVM project!
## How to build
```shell
cmake -S llvm/ -B build/ -GNinja -DLLVM_ENABLE_PROJECTS=clang -DCMAKE_INSTALL_PREFIX=../INSTALL/ -DCMAKE_BUILD_TYPE=Release -DLLVM_ENABLE_ASSERTIONS=On -DLLVM_TARGETS_TO_BUILD=X86 -DLLVM_INCLUDE_TESTS=OFF -DLLVM_INCLUDE_EXAMPLES=OFF -DLLVM_EXPERIMENTAL_TARGETS_TO_BUILD=Konoplia 
ninja -C build/ -j 4
```
```shell
./build/bin/clang -print-targets
```
Output will be the following:
```shell

  Registered Targets:
    Konoplia - Konoplia 64
    x86      - 32-bit X86: Pentium-Pro and above
    x86-64   - 64-bit X86: EM64T and AMD64
