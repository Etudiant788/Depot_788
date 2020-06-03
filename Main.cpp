#include "Dht11.h"
#include "Max4466.h"
#include <iostream>
#include <memory>
#include <vector>

void init(std::vector<std::unique_ptr<Sensor>>& sensors) {
  sensors.push_back(std::make_unique<Dht11>());
  sensors.push_back(std::make_unique<Max4466>());
}

void displayReadings(std::vector<std::unique_ptr<Sensor>> const& sensors) {
  for (auto const &sensor : sensors) {
    sensor->read();
    std::cout << sensor->readValue() << '\n';
  }
  std::cout << '\n';
}

int main() {

  //COLLAB_EDIT

  std::vector<std::unique_ptr<Sensor>> sensors;
  init(sensors);

  displayReadings(sensors);

  return 0;
}
