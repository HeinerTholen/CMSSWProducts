#include "DataFormats/Common/interface/Wrapper.h"
#include "MyProducts/MergeableFloatCounter/interface/MergeableFloatCounter.h"

namespace {
  struct dictionary {
    edm::Wrapper<edm::MergeableFloatCounter> mfc;
  };
}

