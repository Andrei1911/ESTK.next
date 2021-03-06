#ifndef __ScCore_Context__
#define __ScCore_Context__

#include "Root.hpp"

namespace ScCore {

  //
  // All of these signatures are guesswork!
  // Many are bound to be incorrect - they're placeholders until
  // they will be properly analyzed
  //

class Context: Root {
private:
  Context();
  virtual ~Context();
public:
  static Context* get();
};
  
};

#endif
