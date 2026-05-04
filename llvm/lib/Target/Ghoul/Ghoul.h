#ifndef LLVM_LIB_TARGET_Ghoul_Ghoul_H
#define LLVM_LIB_TARGET_Ghoul_Ghoul_H

#include "llvm/Support/raw_ostream.h"

#define Ghoul_DUMP(Color)                                                        \
  {                                                                            \
    llvm::errs().changeColor(Color)                                            \
        << __func__ << "\n\t\t" << __FILE__ << ":" << __LINE__ << "\n";        \
    llvm::errs().changeColor(llvm::raw_ostream::WHITE);                        \
  }
// #define Ghoul_DUMP(Color) {}

#define Ghoul_DUMP_RED Ghoul_DUMP(llvm::raw_ostream::RED)
#define Ghoul_DUMP_GREEN Ghoul_DUMP(llvm::raw_ostream::GREEN)
#define Ghoul_DUMP_YELLOW Ghoul_DUMP(llvm::raw_ostream::YELLOW)
#define Ghoul_DUMP_CYAN Ghoul_DUMP(llvm::raw_ostream::CYAN)
#define Ghoul_DUMP_MAGENTA Ghoul_DUMP(llvm::raw_ostream::MAGENTA)

#endif // LLVM_LIB_TARGET_Ghoul_Ghoul_H