//===- ARMRegisterBankInfo ---------------------------------------*- C++ -*-==//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
/// \file
/// This file declares the targeting of the RegisterBankInfo class for ARM.
/// \todo This should be generated by TableGen.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_ARM_ARMREGISTERBANKINFO_H
#define LLVM_LIB_TARGET_ARM_ARMREGISTERBANKINFO_H

#include "llvm/CodeGen/GlobalISel/RegisterBankInfo.h"

namespace llvm {

class TargetRegisterInfo;

namespace ARM {
enum {
  GPRRegBankID = 0, // General purpose registers
  NumRegisterBanks,
};
} // end namespace ARM

/// This class provides the information for the target register banks.
class ARMRegisterBankInfo final : public RegisterBankInfo {
public:
  ARMRegisterBankInfo(const TargetRegisterInfo &TRI);

  const RegisterBank &
  getRegBankFromRegClass(const TargetRegisterClass &RC) const override;

  InstructionMapping getInstrMapping(const MachineInstr &MI) const override;
};
} // End llvm namespace.
#endif
