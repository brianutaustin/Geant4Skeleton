#include "LSPhysicsList.hh"

LSPhysicsList::LSPhysicsList() : G4VModularPhysicsList() {
  SetVerboseLevel(1);

  /**
   * EM Physics
   */
  RegisterPhysics(new G4EmStandardPhysics());

  /**
   * Optical Physics
   */

  G4OpticalPhysics* opticalPhysics = new G4OpticalPhysics();
  opticalPhysics->Configure(kCerenkov, true);
  opticalPhysics->Configure(kScintillation, false);
  opticalPhysics->Configure(kAbsorption, false);
  opticalPhysics->Configure(kMieHG, false);
  opticalPhysics->Configure(kRayleigh, false);
  opticalPhysics->Configure(kBoundary, false);
  opticalPhysics->Configure(kWLS, false);
  opticalPhysics->SetScintillationYieldFactor(1.0);
  opticalPhysics->SetScintillationExcitationRatio(0.0);
  opticalPhysics->SetMaxNumPhotonsPerStep(100);
  opticalPhysics->SetMaxBetaChangePerStep(10.0);
  //opticalPhysics->SetTrackSecondariesFirst(kCerenkov, false);
  //opticalPhysics->SetTrackSecondariesFirst(kScintillation, true);
  RegisterPhysics(opticalPhysics);
}

LSPhysicsList::~LSPhysicsList() {
}

void LSPhysicsList::SetCuts() {
  G4VUserPhysicsList::SetCuts();
}
