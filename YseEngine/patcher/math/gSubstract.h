#pragma once
#include "../pObject.h"

namespace YSE {
  namespace PATCHER {

    PATCHER_CLASS(gSubstract, YSE::OBJ::G_SUBSTRACT)
      _NO_MESSAGES
      _DO_CALCULATE

      _FLOAT_IN(SetLeftFloat)
      _FLOAT_IN(SetRightFloat)

      _INT_IN(SetLeftInt)
      _INT_IN(SetRightInt)

private:
  float leftIn;
  float rightIn;
  float result;
  };
}
}
