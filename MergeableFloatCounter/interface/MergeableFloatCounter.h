#ifndef Common_MergeableFloatCounter_h
#define Common_MergeableFloatCounter_h

namespace edm {

  struct MergeableFloatCounter {
    ~MergeableFloatCounter() {}
    bool mergeProduct(MergeableFloatCounter const & newThing);
    float value;
  };

}

#endif
