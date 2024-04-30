# VR_Environment
## Features
A virtual environment with focus on immersion and presence. As of the moment, there are a couple of features that have been implemented as listed below:
- [x] Gesture Detection
- [x] Navigation through Gestures (Pinch, Hold, etc.)
- [x] Basic Animal AI (Follow butterflies, roam)
- [x] Reactive Animal (React to player, spiders)
- [x] Interactive Tree Cutting using Chaos Physics
- [x] Spatial and Binaural Audio
- [x] Inverse Kinematics (IK) for full body tracking
- [ ] Replication over network (Only works for the Whiteboard - Tested on a listen server locally)

Some screenshots are attached down below for the same, displaying various parts of the game and their implementation in Engine. The game was developed on Unreal Engine 5.2.1

<div align="center">
    <img src="/Files/gripAR.png" width="1080"/>
    <br>
    This screenshot from the VR environment demonstrates a richly detailed virtual setting, featuring advanced gesture recognition and hand tracking capabilities. Integrated inverse kinematics (IK) support full upper=body tracking, enhancing player immersion. The scene also showcases basic animal AI behaviors with dynamically interacting vegetation, developed using Unreal Engine 5.2.1
</div> 
<br>
In-editor development, for spatial immersive audio, Audio Volumes have been used to simulate attenuation and mixing/overlapping of audio. A basic UI for getting an axe is also integrated, which saves you the hassle of running around to cut trees. The tree cutting closely represents real-life where-in the trees fell based on real physics and are not pre-baked.
<br><br>
<div align="center">
    <img src="/Files/axeAR.png" width="1080"/>
    <br>
    UI setup to make accessing the axe and other props easier to use.
</div> 
<br>

## Gameplay
Below are some screenshots for different regions and elements in-game, a cave. Along with some animation pictures, that were done in Blender. The deer's walk cycle has been animated manually (It's not the best). There is also a screenshot of a dragon following a butterfly. The dragon is officially taken from the Epic Games Marketplace.
<br><br>
<div align="center">
    <img src="/Files/caveAR.png" width="540"/>
    <br>
    Cave, a special area in the game.
    <br><br>
    <img src="/Files/blenderDeerAR.png" width="540"/>
    <br>
    Deer Walk Cycle Graph Editor snapshot from Blender.
    <br><br>
    <img src="/Files/dragonAR.png" width="540"/>
    <br>
    Dragon/Dinosaur (A raging debate among the team) following butterfly.
</div> 
<br>

## Documentation

Furthermore, the trees and foliage are Procedurally generated using PCG Graphs and Auto-Materials made in Unreal Engine itself. We have also attached a small technical report which can be found in the repo itself. This project was a lot of fun and aims at providing a solid foundation for further developers with various features such as hand tracking, animal AI, navigation boundaries, and various small quality of life features setup. Aiming to make VR development more accessible. <br>

[Technical_Details.pdf](/Files/Augmented_Reality_Project_Report.pdf)

## Conclusion

Thanks for stopping by! We are not sure about any future updates, but might make a few changes from time to time :)
