#include "DataFormats/Common/interface/Wrapper.h"
#include "MyProducts/MyProducts/interface/MergeableFloatCounter.h"

namespace {
  struct dictionary {
    edm::Wrapper<edm::MergeableFloatCounter> mfc;
  };
}

