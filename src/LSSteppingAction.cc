#include "LSSteppingAction.hh"

LSSteppingAction::LSSteppingAction() {
}

LSSteppingAction::~LSSteppingAction() {
}

void LSSteppingAction::UserSteppingAction(const G4Step* step) {

  G4Track* theCurrentTrack = step->GetTrack();
  if (theCurrentTrack->GetTrackID() == 1) {
    G4cout << "---Step        : " << theCurrentTrack->GetCurrentStepNumber() << G4endl;
    G4cout << "-----Volume    : " << theCurrentTrack->GetVolume()->GetName() << G4endl;
    G4cout << G4endl;
    //G4cout << "Length: " << step->GetStepLength()/mm << " (mm). ";
    //G4cout << "EnDepo: " << step->GetTotalEnergyDeposit()/keV << " (keV). " << G4endl;
  }
  return;
}
