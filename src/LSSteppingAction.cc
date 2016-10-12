#include "LSSteppingAction.hh"

LSSteppingAction::LSSteppingAction() {
}

LSSteppingAction::~LSSteppingAction() {
}

void LSSteppingAction::UserSteppingAction(const G4Step* step) {

  G4Track* theCurrentTrack = step->GetTrack();
  G4cout << "---Step " << theCurrentTrack->GetCurrentStepNumber() << " of TrackID: " << theCurrentTrack->GetTrackID() << ". ";
  G4cout << "Length: " << step->GetStepLength()/mm << " (mm). ";
  G4cout << "EnDepo: " << step->GetTotalEnergyDeposit()/keV << " (keV). " << G4endl;
  return;
}
