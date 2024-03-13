#include "TargetInfo/KonopliaTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheKonopliaTarget() {
    static Target TheKonopliaTarget;
    return TheKonopliaTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeKonopliaTargetInfo() {
    RegisterTarget<Triple::konoplia> X(getTheKonopliaTarget(), "konoplia", "Konoplia 64",
                                        "KONOPLIA");
}
