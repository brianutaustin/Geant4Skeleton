#include "LSRunAction.hh"

LSRunAction::LSRunAction() : G4UserRunAction() {
}

LSRunAction::~LSRunAction() {
}

void LSRunAction::BeginOfRunAction(const G4Run * run) {
  G4int runID = run->GetRunID();
  G4cout << "Run number: " << runID << " started." << G4endl;
}

void LSRunAction::EndOfRunAction(const G4Run * run) {
  G4int runID = run->GetRunID();
  G4cout << "Run number: " << runID << " ended." << G4endl;
}
