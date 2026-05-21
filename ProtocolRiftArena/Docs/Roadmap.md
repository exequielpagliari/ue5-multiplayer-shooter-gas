# Roadmap

This roadmap defines the learning progression for **Protocol: Rift Arena**.

The project is not designed as a commercial game. It is a structured learning project focused on Unreal Engine C++, Gameplay Ability System, Enhanced Input, Gameplay Tags, multiplayer replication, shooter systems, and technical documentation.

Each version should:

1. Teach a specific concept.
2. Reuse knowledge from previous versions.
3. Produce a playable or testable result.
4. Leave documentation and GitHub evidence.

---

## Version 1 - Unreal C++ Gameplay Foundations

### Goal

Learn the minimum Unreal C++ foundation required to build gameplay systems.

### Learn

- `UCLASS`
- `USTRUCT`
- `UENUM`
- `UPROPERTY`
- `UFUNCTION`
- Unreal Reflection System
- Actors
- Pawns
- Characters
- Actor Components
- Scene Components
- Data Assets
- Delegates
- Soft References

### Deliverables

- Base C++ character class.
- Base C++ player controller class.
- Simple gameplay component.
- Variables exposed to Blueprint.
- Blueprint child classes derived from C++.

### Depends On

Version 0 project structure and repository setup.

### Evidence

- `Source/ProtocolRiftArena/`
- `Docs/UnrealCppBasics.md`

### Suggested Commit

```txt
feat: add initial Unreal C++ gameplay classes
```

---

## Version 2 - Unreal Gameplay Framework

### Goal

Understand how Unreal organizes a playable match.

### Learn

- GameInstance
- GameMode
- GameState
- PlayerController
- PlayerState
- Pawn
- Character
- HUD
- World Settings
- Server authority basics

### Core Rule

- GameMode owns authoritative match rules.
- GameState owns replicated global match state.
- PlayerState owns replicated per-player state.
- PlayerController owns player input and connection.
- Character/Pawn owns the controlled body.
- GameInstance persists outside individual matches.

### Deliverables

- Custom GameMode.
- Custom GameState.
- Custom PlayerState.
- Custom PlayerController.
- Custom Character.
- Basic spawn flow.

### Depends On

Version 1 C++ foundations.

### Evidence

- `Docs/GameplayFramework.md`
- Responsibility diagram for GameMode, GameState, PlayerState, PlayerController and Character.

### Suggested Commit

```txt
feat: add custom gameplay framework classes
```

---

## Version 3 - Basic Replication

### Goal

Learn Unreal's server/client model and basic replicated gameplay.

### Learn

- Authority
- Server/client model
- Replicated variables
- `ReplicatedUsing`
- `OnRep`
- Server RPCs
- Client RPCs
- NetMulticast RPCs
- Ownership
- Replicated actor spawning
- `GetLifetimeReplicatedProps`

### Core Rule

The client requests.  
The server decides.  
Other clients receive the result.

### Deliverables

- Replicated test variable.
- `OnRep` example.
- Server RPC example.
- Client RPC example.
- NetMulticast example.
- Replicated spawned actor.

### Depends On

Version 2 Gameplay Framework.

### Evidence

- `Docs/ReplicationBasics.md`
- Code comments explaining authority and RPC direction.

### Suggested Commit

```txt
feat: add basic replication examples
```

---

## Version 4 - Enhanced Input

### Goal

Build a modern input foundation before connecting input to abilities.

### Learn

- Input Actions
- Input Mapping Contexts
- Input Modifiers
- Input Triggers
- Input binding in C++
- Separation between physical input and gameplay intent

### Deliverables

- Movement input.
- Camera input.
- Jump input.
- Sprint input.
- Crouch input.
- Test action input.

### Depends On

Version 1 C++ foundations and Version 2 PlayerController/Character setup.

### Evidence

- `Docs/EnhancedInput.md`
- Explanation of physical input to gameplay intent.

### Suggested Commit

```txt
feat: implement enhanced input foundation
```

---

## Version 5 - Gameplay Tags

### Goal

Create the internal language of the project.

### Learn

- Gameplay Tags
- Tag taxonomy
- Input tags
- Ability tags
- State tags
- Weapon tags
- Team tags
- Role tags
- Blocking and required tags

### Example Tags

```txt
InputTag.Weapon.Fire
InputTag.Weapon.Reload
InputTag.Ability.Dash
Ability.Type.Action.WeaponFire
Ability.Type.Action.Reload
Ability.Type.Movement.Dash
State.Dead
State.Stunned
State.Reloading
State.Invisible
Weapon.Type.Rifle
Team.Alpha
Team.Omega
Role.Assault
Role.Support
Role.Scout
Role.Defender
```

### Deliverables

- Initial Gameplay Tag configuration.
- Tag naming convention.
- Tag documentation.
- Simple tag usage in code or Blueprint.

### Depends On

Version 4 Enhanced Input.

### Evidence

- `Docs/GameplayTags.md`

### Suggested Commit

```txt
feat: add initial gameplay tag taxonomy
```

---

## Version 6 - Minimal Gameplay Ability System

### Goal

Introduce GAS with the smallest useful implementation.

### Learn

- AbilitySystemComponent
- AttributeSet
- GameplayAbility
- GameplayEffect
- GameplayCue basics
- Owner Actor
- Avatar Actor
- `InitAbilityActorInfo`
- Attribute replication

### Deliverables

- ASC added to the correct owning class.
- Basic AttributeSet.
- Health attribute.
- Simple GameplayEffect.
- Simple GameplayAbility.
- Basic GAS debugging.

### Depends On

Version 2 Gameplay Framework, Version 3 Replication, and Version 5 Gameplay Tags.

### Evidence

- `Docs/GASIntro.md`
- Diagram: ASC -> Ability -> Effect -> Attribute.

### Suggested Commit

```txt
feat: add minimal gameplay ability system setup
```

---

## Version 7 - Input Tags and Ability Sets

### Goal

Connect Enhanced Input to GAS in a scalable way.

### Learn

- Input Tags
- Ability Specs
- Binding input to abilities
- AbilitySet Data Assets
- Granting abilities from data
- Separating configuration from code

### Deliverables

- Input action activates a Gameplay Ability through an Input Tag.
- AbilitySet grants abilities.
- AbilitySet can be changed through data.

### Depends On

Version 4 Enhanced Input, Version 5 Gameplay Tags, and Version 6 GAS setup.

### Evidence

- `Docs/InputToAbilityFlow.md`
- Diagram: key/button -> Input Action -> Input Tag -> ASC -> Gameplay Ability.

### Suggested Commit

```txt
feat: bind enhanced input to gameplay abilities
```

---

## Version 8 - Health, Damage, Death and Respawn

### Goal

Create the core combat lifecycle.

### Learn

- Health AttributeSet
- Shield AttributeSet basics
- Damage GameplayEffect
- Healing GameplayEffect basics
- Death state
- `State.Dead`
- Damage instigator
- Damage causer
- Respawn flow
- Spawn invulnerability

### Deliverables

- Player can receive damage.
- Health replicates.
- Player dies at 0 health.
- Dead players cannot act.
- Player respawns after a delay.

### Depends On

Version 6 GAS and Version 7 ability activation flow.

### Evidence

- `Docs/HealthDamageDeath.md`

### Suggested Commit

```txt
feat: implement health damage death and respawn flow
```

---

## Version 9 - Rifle Hitscan Weapon

### Goal

Build the first real shooter weapon.

### Learn

- Weapon Actor
- Weapon Instance basics
- LineTrace
- HitResult
- Collision channels
- Fire rate
- Ammo
- Reload
- Spread
- Damage falloff basics
- Headshot basics
- Server-authoritative fire

### Deliverables

- Functional rifle.
- Hitscan fire.
- Ammo count.
- Reload.
- Damage applied through GameplayEffect.
- Basic impact feedback.

### Depends On

Version 8 Health/Damage/Death.

### Evidence

- `Docs/WeaponSystem_Rifle.md`
- Diagram: input -> ability -> weapon trace -> hit -> damage effect.

### Suggested Commit

```txt
feat: implement basic hitscan rifle
```

---

## Version 10 - Basic HUD

### Goal

Display gameplay state without putting gameplay logic inside widgets.

### Learn

- UMG
- Common UI basics if appropriate
- Widget Controller pattern
- Delegates for UI updates
- Health bar
- Shield bar
- Ammo UI
- Crosshair
- Hit marker
- Cooldown indicator

### Deliverables

- Health UI.
- Shield UI.
- Ammo UI.
- Crosshair.
- Hit marker.
- Basic cooldown display.

### Depends On

Version 8 combat lifecycle and Version 9 rifle weapon.

### Evidence

- `Docs/UIArchitecture.md`

### Suggested Commit

```txt
feat: add basic combat hud
```

---

## Version 11 - Teams, Score and Respawn Rules

### Goal

Turn individual combat into a team-based match.

### Learn

- Team assignment
- PlayerState for player data
- GameState for replicated match data
- GameMode for authoritative rules
- Kill credit
- Assist credit basics
- Team respawn
- Scoreboard
- Match timer
- Win condition

### Deliverables

- Alpha and Omega teams.
- Kills grant score.
- Team score replicates.
- Players respawn by team.
- Match can end by score or timer.

### Depends On

Version 2 Gameplay Framework, Version 3 Replication, and Version 8 Death/Respawn.

### Evidence

- `Docs/TeamsAndScore.md`

### Suggested Commit

```txt
feat: add teams score and match win conditions
```

---

## Version 12 - Rift Control Objective

### Goal

Create the main game mode objective.

### Learn

- Objective Actor
- Overlaps
- Control zones
- Team presence detection
- Capture progress
- Contested state
- Objective state replication
- Objective UI
- Match phases

### Deliverables

- Central Rift zone.
- Team control detection.
- Contested state.
- Score gain from objective control.
- Objective HUD.

### Depends On

Version 11 Teams and Score.

### Evidence

- `Docs/RiftControlMode.md`
- Objective state diagram.

### Suggested Commit

```txt
feat: implement rift control objective
```

---

## Version 13 - Roles and Loadouts

### Goal

Introduce class-based gameplay through data.

### Learn

- Role Data Assets
- PawnData basics
- AbilitySet per role
- Loadout per role
- Role stats
- Role selection UI
- Server validation
- Applying role on respawn

### Roles

- Assault: rifle, dash, frag grenade.
- Support: light rifle, heal, shield pulse.
- Scout: light rifle or pistol, scan, cloak.
- Defender: heavy rifle, barrier, turret later.

### Deliverables

- Role selection.
- Role-specific loadout.
- Role-specific abilities.
- Role applied safely on respawn.

### Depends On

Version 7 AbilitySets, Version 9 weapons, and Version 11 teams.

### Evidence

- `Docs/RoleSystem.md`

### Suggested Commit

```txt
feat: add role definitions and loadouts
```

---

## Version 14 - Movement Abilities

### Goal

Build GAS-driven movement abilities.

### Learn

- Dash ability
- Sprint as ability or state
- Cooldowns
- Optional costs
- Ability commitment
- Blocked tags
- Required tags
- Movement GameplayCue
- Basic prediction concepts

### Deliverables

- Assault dash.
- Dash cooldown.
- Dash blocked while dead or stunned.
- Dash feedback.

### Depends On

Version 7 InputTag/AbilitySet and Version 13 Roles.

### Evidence

- `Docs/MovementAbilities.md`

### Suggested Commit

```txt
feat: add gas movement abilities
```

---

## Version 15 - Offensive Abilities

### Goal

Create damage abilities beyond the rifle.

### Learn

- Grenade ability
- Projectile Actor
- Radial damage
- Explosion GameplayEffect
- Explosion GameplayCue
- Cooldowns
- Server-spawned replicated actors
- Damage causer and instigator

### Deliverables

- Assault grenade.
- Projectile replication.
- Radial damage.
- Explosion VFX/SFX cue.
- Cooldown.

### Depends On

Version 8 Damage system and Version 14 ability patterns.

### Evidence

- `Docs/OffensiveAbilities.md`

### Suggested Commit

```txt
feat: add grenade offensive ability
```

---

## Version 16 - Support and Defensive Abilities

### Goal

Create healing, shield and defensive tools.

### Learn

- Healing GameplayEffect
- Shield attributes
- Shield pulse
- Barrier Actor
- Deployable Actor basics
- Team filtering
- Duration effects
- Persistent GameplayCues

### Deliverables

- Support heal.
- Support shield pulse.
- Defender barrier.
- Team-aware targeting.
- Visual feedback for support effects.

### Depends On

Version 13 Roles and Version 15 ability flow.

### Evidence

- `Docs/SupportDefensiveAbilities.md`

### Suggested Commit

```txt
feat: add support and defensive abilities
```

---

## Version 17 - Scout, States and Information Gameplay

### Goal

Create information-based gameplay and temporary states.

### Learn

- Scan ability
- Mark enemy
- Cloak
- Loose Gameplay Tags
- Owned Tags
- `State.Invisible`
- `State.Marked`
- UI indicators
- State replication concepts
- Canceling states by damage or firing

### Deliverables

- Scout scan.
- Enemy mark.
- Short cloak.
- UI indicator for marked enemies.

### Depends On

Version 5 Gameplay Tags, Version 10 HUD, and Version 13 Roles.

### Evidence

- `Docs/ScoutInformationGameplay.md`

### Suggested Commit

```txt
feat: add scout information abilities
```

---

## Version 18 - Simplified Lyra-Inspired Architecture

### Goal

Refactor toward a modular architecture without blindly copying Lyra.

### Learn

- Experience Definition
- PawnData
- AbilitySets
- Experience Action Sets
- Game Feature Actions conceptually
- Modular Gameplay
- Asset Manager basics
- Primary Assets
- Component-based architecture
- Composition over inheritance

### Deliverables

- Rift Control represented as an Experience.
- PawnData used to define player setup.
- AbilitySets loaded through data.
- Systems activated by experience-style configuration.

### Depends On

All previous gameplay systems.

### Evidence

- `Docs/LyraInspiredArchitecture.md`

### Suggested Commit

```txt
refactor: introduce simplified experience architecture
```

---

## Version 19 - Basic Inventory and Equipment

### Goal

Create a small but extensible shooter equipment system.

### Learn

- Inventory items
- Equipment definitions
- Weapon pickup
- Weapon switching
- Quickbar basics
- Item instances
- Ammo resources
- Loadouts
- Difference between item and equipment

### Deliverables

- Player loadout.
- Rifle and pistol switching.
- Basic pickup.
- Ammo resource.
- Equipment definitions.

### Depends On

Version 9 weapon system and Version 18 architecture.

### Evidence

- `Docs/InventoryEquipment.md`

### Suggested Commit

```txt
feat: add basic inventory and equipment system
```

---

## Version 20 - Bots for Testing

### Goal

Create simple AI to test the shooter without needing real players.

### Learn

- AIController
- Behavior Tree
- Blackboard
- NavMesh
- Perception
- Team-aware AI
- Bot spawning
- Basic shooting AI
- Objective-aware AI
- Bot respawn

### Deliverables

- Bots spawn.
- Bots move.
- Bots detect enemies.
- Bots shoot.
- Bots move toward objective.
- Bots die and respawn.

### Depends On

Version 11 teams, Version 12 objective, and Version 19 equipment.

### Evidence

- `Docs/Bots.md`

### Suggested Commit

```txt
feat: add basic test bots
```

---

## Version 21 - Basic Shooter Animation

### Goal

Add functional animation presentation without aiming for AAA polish.

### Learn

- Animation Blueprint
- State Machines
- Blend Spaces
- Aim Offset
- Layered Blend per Bone
- Montages
- Anim Notifies
- Reload montage
- Upper-body firing animation
- Death animation
- Hit reactions

### Deliverables

- Basic locomotion animation.
- Aim offset.
- Fire animation.
- Reload montage.
- Death animation or ragdoll.
- Basic hit reaction.

### Depends On

Version 9 rifle, Version 10 HUD, and Version 13 Roles.

### Evidence

- `Docs/AnimationSystem.md`

### Suggested Commit

```txt
feat: add basic shooter animation system
```

---

## Version 22 - Gameplay Cues, VFX and Audio

### Goal

Separate real gameplay from feedback.

### Learn

- Gameplay Cues
- Niagara basics
- Muzzle flash
- Bullet impacts
- Explosion effects
- Shield effects
- Heal effects
- Dash trail
- Cloak effect
- Hit feedback
- Sound cues or MetaSounds
- Attenuation
- UI sounds

### Core Rule

Gameplay real = Ability / Effect.  
Feedback visual/audio = Gameplay Cue / Niagara / Sound.

### Deliverables

- Muzzle flash.
- Bullet impacts.
- Explosion cue.
- Heal cue.
- Shield cue.
- Dash cue.
- Cloak cue.
- Basic weapon and UI sounds.

### Depends On

Versions 14, 15, 16 and 17 abilities.

### Evidence

- `Docs/GameplayCuesVFXAudio.md`

### Suggested Commit

```txt
feat: add gameplay cues vfx and audio feedback
```

---

## Version 23 - Professional Debugging

### Goal

Learn how to diagnose complex gameplay systems.

### Learn

- Output Log
- Gameplay Debugger
- `ShowDebug AbilitySystem`
- Ability System Debugger
- Visual Logger
- Network emulation
- `Net PktLag`
- `Net PktLoss`
- Blueprint breakpoints
- C++ debugging
- Custom log categories

### Deliverables

- Debug commands documented.
- GAS debugging workflow.
- Networking debugging workflow.
- Custom logs by system.
- Lag simulation notes.

### Depends On

All previous systems.

### Evidence

- `Docs/DebuggingGuide.md`

### Suggested Commit

```txt
docs: add gameplay debugging guide
```

---

## Version 24 - Performance and Networking Polish

### Goal

Understand basic optimization for gameplay and multiplayer.

### Learn

- Tick cost
- Replication cost
- Network relevancy
- Dormancy concepts
- Replication frequency
- Object pooling basics
- Niagara performance
- Animation budget basics
- CPU/GPU frame time
- Unreal Insights basics
- Network Profiler concepts

### Deliverables

- Unnecessary ticks reduced.
- Replication reviewed.
- Performance notes written.
- Basic profiling pass completed.

### Depends On

A mostly complete prototype.

### Evidence

- `Docs/PerformanceNotes.md`

### Suggested Commit

```txt
perf: optimize basic gameplay and replication costs
```

---

## Version 25 - Portfolio and Project Closure

### Goal

Turn the project into a clear portfolio piece.

### Learn

- Professional README writing.
- Technical design documentation.
- System diagrams.
- Gameplay clips or GIFs.
- Architecture explanation.
- Honest limitation writing.
- Postmortem writing.
- Future roadmap writing.

### Deliverables

- Final README.
- Technical overview.
- System diagrams.
- Screenshots or GIFs.
- Postmortem.
- Future work section.

### Depends On

All previous versions.

### Evidence

- `README.md`
- `Docs/TechnicalOverview.md`
- `Docs/SystemDiagrams.md`
- `Docs/Postmortem.md`
- `Media/`

### Suggested Commit

```txt
docs: finalize portfolio documentation
```

---

# Version Dependency Chain

```txt
V0  -> Project foundation
V1  -> C++ foundations
V2  -> Gameplay Framework
V3  -> Replication
V4  -> Enhanced Input
V5  -> Gameplay Tags
V6  -> GAS basics
V7  -> InputTag + AbilitySet
V8  -> Health/Damage/Death
V9  -> Rifle
V10 -> HUD
V11 -> Teams/Score/Respawn
V12 -> Rift Control Objective
V13 -> Roles/Loadouts
V14 -> Movement Abilities
V15 -> Offensive Abilities
V16 -> Support/Defensive Abilities
V17 -> Scout/Information Gameplay
V18 -> Lyra-inspired Architecture
V19 -> Inventory/Equipment
V20 -> Bots
V21 -> Animation
V22 -> Gameplay Cues/VFX/Audio
V23 -> Debugging
V24 -> Performance/Networking Polish
V25 -> Portfolio Closure
```

---

# Feature Acceptance Rule

A feature may be added only if it satisfies at least one of these conditions:

1. It teaches an important Unreal Engine system.
2. It improves an existing learning milestone.
3. It makes the project easier to test.
4. It improves the clarity of the portfolio.
5. It supports a later version directly.

If a feature is only “cool” but does not teach or support the roadmap, it should be postponed.

---

# Out of Scope for the Main Roadmap

The following are intentionally excluded from the main roadmap:

- Matchmaking
- Backend services
- Ranked mode
- Cosmetics
- Skins
- Shop systems
- Battle pass
- Campaign
- Cinematics
- Open world
- Large-scale inventory
- Advanced anti-cheat
- Full lag compensation system
- Commercial-level polish

These topics can be explored later, but they are not part of the core learning path.
