#include "LSTrackingAction.hh"

LSTrackingAction::LSTrackingAction() {
}

LSTrackingAction::~LSTrackingAction() {
}

void LSTrackingAction::PreUserTrackingAction(const G4Track* track) {
  trkID = track->GetTrackID();
  G4cout << "\t\tTrack ID: " << trkID << G4endl;
}

void LSTrackingAction::PostUserTrackingAction(const G4Track* track) {
  trkID = track->GetTrackID();
}
