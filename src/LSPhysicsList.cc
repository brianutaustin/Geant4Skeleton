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
  opticalPhysics->Configure(kCerenkov, false);
  opticalPhysics->Configure(kScintillation, true);
  opticalPhysics->Configure(kAbsorption, true);
  opticalPhysics->Configure(kMieHG, false);
  opticalPhysics->Configure(kRayleigh, true);
  opticalPhysics->Configure(kBoundary, true);
  opticalPhysics->Configure(kWLS, false);
  //opticalPhysics->SetScintillationYieldFactor(1.0);
  //opticalPhysics->SetScintillationExcitationRatio(0.0);
  //opticalPhysics->SetMaxNumPhotonsPerStep(10000);
  //opticalPhysics->SetMaxBetaChangePerStep(10.0);
  //opticalPhysics->SetTrackSecondariesFirst(kCerenkov, true);
  //opticalPhysics->SetTrackSecondariesFirst(kScintillation, true);
  RegisterPhysics(opticalPhysics);
}

LSPhysicsList::~LSPhysicsList() {
}

void LSPhysicsList::SetCuts() {
  G4VUserPhysicsList::SetCuts();
}
