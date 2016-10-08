#include "LSSteppingAction.hh"

LSSteppingAction::LSSteppingAction() {
}

LSSteppingAction::~LSSteppingAction() {
}

void LSSteppingAction::UserSteppingAction(const G4Step* step) {
  G4Track* theCurrentTrack = step->GetTrack();
  G4cout << "\t\t\tStep " << theCurrentTrack->GetCurrentStepNumber() << " of TrackID: " << theCurrentTrack->GetTrackID();

  

}
