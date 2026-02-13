// Smart Animal Safety System
// Core Detection Algorithm

#define IMPACT_THRESHOLD 15
#define INACTIVITY_LIMIT 300
#define TEMP_LIMIT 39

float readAcceleration();
float readTemperature();
int detectInactivity();
void triggerAlert();

void loop() {

  float acceleration = readAcceleration();
  float temperature = readTemperature();
  int inactivity = detectInactivity();

  if (acceleration > IMPACT_THRESHOLD ||
      inactivity > INACTIVITY_LIMIT ||
      temperature > TEMP_LIMIT) {

      triggerAlert();
  }
}

// Debug Improvements:
// Impact threshold increased to reduce false positives.
// Inactivity duration calibrated after testing movement patterns.
