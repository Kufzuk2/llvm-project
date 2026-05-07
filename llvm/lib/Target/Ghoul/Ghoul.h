#ifndef LLVM_LIB_TARGET_Ghoul_Ghoul_H
#define LLVM_LIB_TARGET_Ghoul_Ghoul_H

#include "llvm/Support/raw_ostream.h"

#define GHOUL_DUMP(Color)                                                        \
  {                                                                            \
    llvm::errs().changeColor(Color)                                            \
        << __func__ << "\n\t\t" << __FILE__ << ":" << __LINE__ << "\n";        \
    llvm::errs().changeColor(llvm::raw_ostream::WHITE);                        \
  }
// #define GHOUL_DUMP(Color) {}

#define GHOUL_DUMP_RED GHOUL_DUMP(llvm::raw_ostream::RED)
#define GHOUL_DUMP_GREEN GHOUL_DUMP(llvm::raw_ostream::GREEN)
#define GHOUL_DUMP_YELLOW GHOUL_DUMP(llvm::raw_ostream::YELLOW)
#define GHOUL_DUMP_CYAN GHOUL_DUMP(llvm::raw_ostream::CYAN)
#define GHOUL_DUMP_MAGENTA GHOUL_DUMP(llvm::raw_ostream::MAGENTA)

#endif // LLVM_LIB_TARGET_GHOUL_GHOUL_H