#ifndef LSTrackingAction_h
#define LSTrackingAction_h 1

#include "G4UserTrackingAction.hh"
#include "G4Track.hh"
#include "globals.hh"

class LSTrackingAction : public G4UserTrackingAction {
public:
  LSTrackingAction();
  virtual ~LSTrackingAction();

  virtual void PreUserTrackingAction(const G4Track*);
  virtual void PostUserTrackingAction(const G4Track*);

};

#endif
