#include "LSTrackingAction.hh"

LSTrackingAction::LSTrackingAction() {
}

LSTrackingAction::~LSTrackingAction() {
}

void LSTrackingAction::PreUserTrackingAction(const G4Track* track) {
  trkID = track->GetTrackID();
  G4cout << "--Track ID: " << trkID << G4endl;

  G4cout << "----Particle  : " << track->GetParticleDefinition()->GetParticleName() << ". " << G4endl;
  G4cout << "----ILength   : " << track->GetTrackLength()/(mm) << " (mm). " << G4endl;
  G4cout << "----IMomentum : " << track->GetMomentum()/(keV) << " (keV). " << G4endl;
  G4cout << "----IEnergy   : " << track->GetKineticEnergy()/keV << " (keV). " << G4endl;

  return;
}

void LSTrackingAction::PostUserTrackingAction(const G4Track* track) {
  G4cout << "----FLength   : " << track->GetTrackLength()/(mm) << " (mm). " << G4endl;
  G4cout << "----FMomentum : " << track->GetMomentum()/(keV) << " (keV). " << G4endl;
  G4cout << "----FEnergy   : " << track->GetKineticEnergy()/keV << " (keV). " << G4endl;

  return;
}
