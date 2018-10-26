#ifndef __ScCore_Callbacks__
#define __ScCore_Callbacks__

namespace ScCore {

  //
  // All of these signatures are guesswork!
  // Many are bound to be incorrect - they're placeholders until
  // they will be properly analyzed
  //

class Callbacks {
private:
	Callbacks();
	virtual ~Callbacks();
public:
	static Callbacks* get();
	static void set(Callbacks*);
};
  
};

#endif
