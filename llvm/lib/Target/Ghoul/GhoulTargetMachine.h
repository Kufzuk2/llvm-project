#ifndef LLVM_LIB_TARGET_GHOUL_SIMTARGETMACHINE_H
#define LLVM_LIB_TARGET_GHOUL_SIMTARGETMACHINE_H

#include "llvm/CodeGen/CodeGenTargetMachineImpl.h"
#include <optional>

namespace llvm {
extern Target TheGhoulTarget;

class GhoulTargetMachine : public CodeGenTargetMachineImpl {
public:
  GhoulTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                   StringRef FS, const TargetOptions &Options,
                   std::optional<Reloc::Model> RM,
                   std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                   bool JIT);
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_SIM_SIMTARGETMACHINE_H