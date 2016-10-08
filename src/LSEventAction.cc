#include "LSEventAction.hh"

LSEventAction::LSEventAction() : G4UserEventAction() {
}

LSEventAction::~LSEventAction() {
}

void LSEventAction::BeginOfEventAction(const G4Event * event) {
  G4int evtID = event->GetEventID();
  G4cout << "\tEvent number: " << evtID << " started." << G4endl;

  return;
}

void LSEventAction::EndOfEventAction(const G4Event * event) {
  G4int evtID = event->GetEventID();
  G4cout << "\tEvent number: " << evtID << " ended." << G4endl;

  return;
}
