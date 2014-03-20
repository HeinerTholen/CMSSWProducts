#include "MyProducts/MergeableFloatCounter/interface/MergeableFloatCounter.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"

namespace edm 
{

  bool MergeableFloatCounter::mergeProduct(MergeableFloatCounter const& a)
  {
    if (a.value > 0. && value+a.value < a.value){
      edm::LogWarning("MergeableFloatCounter|ProductsNotMergeable")
	<< "The merge would lead to an overflow of the counter" << std::endl;
      return false;
    }
    value += a.value;
    return true;
  }

}
