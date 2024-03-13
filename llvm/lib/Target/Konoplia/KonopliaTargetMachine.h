#ifndef LLVM_LIB_TARGET_KONOPLIA_KONOPLIATARGETMACHINE_H
#define LLVM_LIB_TARGET_KONOPLIA_KONOPLIATARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include <optional>

namespace llvm {
extern Target TheKonopliaTarget;

class KonopliaTargetMachine : public LLVMTargetMachine {
private:
    std::unique_ptr<TargetLoweringObjectFile> TLOF;
public:
    KonopliaTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                            StringRef FS, const TargetOptions &Options,
                            std::optional<Reloc::Model> RM,
                            std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                            bool JIT, bool isLittle);

    KonopliaTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                            StringRef Fs, const TargetOptions &Options,
                            std::optional<Reloc::Model> RM,
                            std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                            bool JIT);

    TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
    TargetLoweringObjectFile *getObjFileLowering() const override {
        return TLOF.get();
    }
};
} // end namespace llvm

#endif //LLVM_LIB_TARGET_KONOPLIA_KONOPLIATARGETMACHINE_H