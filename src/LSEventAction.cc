#include "LSEventAction.hh"

LSEventAction::LSEventAction(LSRunAction * runAction) : G4UserEventAction() {
}

LSEventAction::~LSEventAction() {
}

void LSEventAction::BeginOfEventAction(const G4Event * event) {
  G4int evtID = event->GetEventID();
  G4cout << "Event number: " << evtID << " started." << G4endl;

  return;
}

void LSEventAction::EndOfEventAction(const G4Event * event) {
  G4int evtID = event->GetEventID();
  G4cout << "Event number: " << evtID << " ended." << G4endl;

  return;
}
