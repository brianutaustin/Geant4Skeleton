#include "LSRunAction.hh"

LSRunAction::LSRunAction() : G4UserRunAction() {
}

LSRunAction::~LSRunAction() {
}

void LSRunAction::BeginOfRunAction(const G4Run * run) {
  runID = run->GetRunID();
  G4cout << "Run number: " << runID << " started." << G4endl;

  return;
}

void LSRunAction::EndOfRunAction(const G4Run * run) {
  runID = run->GetRunID();
  G4cout << "----------------------------------------------------------" << G4endl << G4endl << G4endl;

  return;
}
