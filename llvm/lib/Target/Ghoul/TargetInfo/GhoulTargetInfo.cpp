#include "TargetInfo/GhoulTargetInfo.h"
#include "Ghoul.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target &llvm::getTheGhoulTarget() {
  GHOUL_DUMP_YELLOW
  static Target TheGhoulTarget;
  return TheGhoulTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeGhoulTargetInfo() {
  GHOUL_DUMP_YELLOW
  RegisterTarget<Triple::ghoul> X(getTheGhoulTarget(), "ghoul",
                                "Ghoululator target for LLVM course", "GHOUL");
}