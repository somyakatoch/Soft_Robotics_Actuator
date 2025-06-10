# Soft_Robotics_Actuator

# Soft Robotics Actuator – From Design to Manufacture

This project documents the complete process of designing, fabricating, and testing a soft robotic actuator based on pneumatic principles. Soft actuators mimic the flexibility and compliance of biological muscles, making them ideal for safe human interaction and delicate object manipulation.

---

## 📌 Table of Contents

- [Overview](#overview)
- [Materials Required](#materials-required)
- [Tools & Equipment](#tools--equipment)
- [Design Process](#design-process)
- [Mold Fabrication](#mold-fabrication)
- [Casting the Actuator](#casting-the-actuator)
- [Final Assembly](#final-assembly)
- [Pneumatic Control System](#pneumatic-control-system)
- [Testing & Validation](#testing--validation)
- [Applications](#applications)
- [Troubleshooting](#troubleshooting)
- [Contributors](#contributors)

---

## 🧠 Overview

This actuator consists of a soft silicone body with embedded channels that expand under air pressure, causing it to bend or elongate. The actuator is fabricated using a 3D-printed mold and cast using flexible silicone rubbers like **EcoFlex 00-30** or **Dragon Skin**.

---

## 🧰 Materials Required

| Material                  | Quantity |
|--------------------------|----------|
| EcoFlex 00-30 or Dragon Skin | 200-300 ml |
| Cornstarch / Talcum powder (for mold release) | as needed |
| Silicone Tubing (3-5 mm ID) | 20-30 cm |
| PLA/ABS Filament (for mold) | ~200 g |
| Hot Glue or Silicone Adhesive | as needed |

---

## 🛠 Tools & Equipment

- 3D Printer (FDM type)
- Vacuum Chamber (optional but recommended)
- Weighing Scale
- Mixing Cups & Stirrers
- Air Compressor or Hand Pump
- Arduino + Relay Module (for solenoid valve control)
- Solenoid Valves (5V or 12V)
- Syringes (for manual testing)

---

## 🧩 Design Process

1. **CAD Modeling**:  
   - Use Fusion 360, SolidWorks, or Tinkercad to design the actuator mold.
   - Channels: Typically U-shaped or straight longitudinal air cavities.
   - Include top and bottom parts of the mold with alignment features.

2. **Mold Design Tips**:  
   - Avoid sharp corners (stress concentrators).
   - Ensure demolding is easy with draft angles.
   - Include inlet hole for pneumatic tubing.

3. **Export**: Save the mold parts as STL files.

---

## 🧱 Mold Fabrication

1. 3D print the mold using PLA or ABS.
2. Smooth the surfaces with sandpaper for better finish.
3. Apply mold release (optional but recommended).

---

## 🧪 Casting the Actuator

1. Mix the silicone (EcoFlex or Dragon Skin) in a 1:1 ratio.
2. Degas in a vacuum chamber (optional but improves quality).
3. Pour the silicone into the bottom mold cavity.
4. Insert a thin rod or wire where you want hollow air channels.
5. Close the top mold and clamp it.
6. Cure for 4-6 hours at room temperature (or as per silicone specs).
7. Demold carefully and trim excess material.

---

## 🧷 Final Assembly

1. Insert the pneumatic tube into the actuator’s inlet hole.
2. Seal the connection with silicone adhesive.
3. Test for air leaks using a syringe.

---

## 💨 Pneumatic Control System

### Manual Testing:
- Connect a syringe to inflate and observe deformation.

### Automated Testing:
- Connect actuator to solenoid valves controlled via Arduino.
- Use a relay module to drive the valves.
- Sample Arduino logic:
```cpp
int valvePin = 8;
void setup() {
  pinMode(valvePin, OUTPUT);
}
void loop() {
  digitalWrite(valvePin, HIGH); // Inflate
  delay(2000);
  digitalWrite(valvePin, LOW); // Deflate
  delay(2000);
}
