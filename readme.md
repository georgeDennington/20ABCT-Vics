# 20th ABCT - Arma 3 Mod

A British Armed Forces mod for Arma 3 featuring vehicles, infantry units, weapons, and logistics for the **20th Armoured Brigade Combat Team (20th ABCT)**. Built around modern British Army equipment including the Challenger 2 MBT, FV510 Warrior IFV, FV107 Scimitar CVRT, and FV432 Bulldog APC.

## Addon Modules

| Addon | Description |
|-------|-------------|
| **core** | Faction definition (`20ABCT`, BLUFOR), editor categories, unit insignia (5 Rifles, 1 AMR, 1 RLC, 1st ITB) |
| **weapons** | Ammunition configs: 30mm RARDEN (APDS-T / HEI-T), 7.62x51mm COAX & GPMG belts, 120mm L27 APFSDS / HESH-T / Smoke, L85A3 rifle variants |
| **infantry** | Full infantry orbat: section commanders, riflemen, gunners, MG teams, HQ elements, fireteams |
| **bulldogs** | FV432 Bulldog Mk3 APCs: HMG and GPMG variants in desert & woodland |
| **warriors** | FV510 Warrior IFV and FV514 MAOV: base, woodland, deployment, and AI variants |
| **cvrt** | FV107 Scimitar with 30mm RARDEN cannon: desert, woodland, and deployable variants |
| **cr2** | FV4034 Challenger 2 MBT: 120mm L30A1 cannon, APFSDS/HESH-T/Smoke single-round loading system |
| **logistics** | Supply crates (ammo, medical), cargo trucks, fuel trucks |

## Dependencies

This mod requires the following mods to be loaded:

| Mod | Steam Workshop ID |
|-----|-------------------|
| [CBA_A3](https://steamcommunity.com/sharedfiles/filedetails/?id=450814997) | 450814997 |
| [ACE3](https://steamcommunity.com/sharedfiles/filedetails/?id=463939057) | 463939057 |
| [UK3CB BAF Vehicles](https://steamcommunity.com/sharedfiles/filedetails/?id=893349825) | 893349825 |
| [ACRE2](https://steamcommunity.com/sharedfiles/filedetails/?id=1755268799) | 1755268799 |
| [AF:UK (Armed Forces UK)](https://steamcommunity.com/sharedfiles/filedetails/?id=2094487581) | 2094487581 |
| [QAV Challenger](https://steamcommunity.com/sharedfiles/filedetails/?id=3365663203) | 3365663203 |
| [JSRS 2025](https://steamcommunity.com/sharedfiles/filedetails/?id=3407948300) | 3407948300 |

## Building with HEMTT

[HEMTT](https://github.com/BrettMayson/HEMTT) is the build tool used to compile this mod into PBO files.

### Prerequisites

1. **Install HEMTT** - Download the latest release from [GitHub](https://github.com/BrettMayson/HEMTT/releases) and add it to your PATH, or install via:
   ```
   winget install BrettMayson.HEMTT
   ```
2. **Arma 3** and all dependencies listed above must be installed.

### Project Configuration

The HEMTT config lives at `.hemtt/project.toml`:

- **Mod name:** `20ABCT`
- **Prefix:** `z\20ABCT` (mainprefix `z`, prefix `20ABCT`)
- **Version:** Read from `addons/core/script_version.hpp`

### Build Commands

From the project root directory:

```bash
# Check for config errors without building
hemtt check

# Development build (fast, no binarization)
hemtt dev

# Release build (binarized, optimized PBOs)
hemtt release
```

- `hemtt dev` outputs to `.hemttout/dev` and symlinks into your Arma 3 mod folder for quick testing.
- `hemtt release` outputs a distributable zip/folder under `.hemttout/release`.

### Launching with HEMTT

The project includes a launch configuration that loads all required workshop mods and a test mission:

```bash
hemtt launch
```

This starts Arma 3 with all workshop dependencies and loads the mission `20abct.Stratis`.

## Project Structure

```
Keown_brit/
├── .hemtt/
│   └── project.toml          # HEMTT build configuration
├── addons/
│   ├── bulldogs/              # FV432 Bulldog APCs
│   ├── core/                  # Faction, categories, insignia
│   ├── cr2/                   # Challenger 2 MBT
│   ├── cvrt/                  # FV107 Scimitar CVRT
│   ├── infantry/              # Infantry units & squads
│   ├── logistics/             # Supply crates & trucks
│   ├── warriors/              # FV510 Warrior & FV514 MAOV
│   └── weapons/               # Ammo, weapons, munitions
└── readme.md
```

Each addon folder contains a `config.cpp`, a `$PBOPREFIX$` file (defining the PBO path as `z\20abct\addons\<name>`), and any associated scripts or data files.

## Features

- **ACE3 Integration** - Refuel capacities, cargo space, medical loadouts, and arsenal compatibility on all vehicles
- **ACRE2 Integration** - Crew intercom and Bowman radio racks on armoured vehicles
- **JSRS 2025 Sound Integration** - Custom acoustic profiles for weapons and vehicle armaments
- **Auto Magazine Cleanup** - Custom event handlers on the Challenger 2 and Scimitar automatically remove empty single-round magazines after firing, preventing turret clutter
- **Full ORBAT** - Complete infantry sections, vehicle crews, and HQ elements ready for editor placement

## Author

**Keown** - 20th ABCT Mod Development Team
