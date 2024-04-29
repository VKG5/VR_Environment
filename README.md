# VR_Environment
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

![This screenshot from the VR environment demonstrates a richly detailed virtual setting, featuring advanced gesture recognition and hand tracking capabilities. Integrated inverse kinematics (IK) support full upper=body tracking, enhancing player immersion. The scene also showcases basic animal AI behaviors with dynamically interacting vegetation, developed using Unreal Engine 5.2.1](https://github.com/VKG5/VR_Environment/assets/44497128/a716c762-6df8-4c06-ab30-73af7049ae51)

In-editor development, for spatial immersive audio, Audio Volumes have been used to simulate attenuation and mixing/overlapping of audio. A basic UI for getting an axe is also integrated, which saves you the hassle of running around to cut trees. The tree cutting closely represents real-life where-in the trees fell based on real physics and are not pre-baked.

![UI setup to make accessing the axe and other props easier to use.](https://github.com/VKG5/VR_Environment/assets/44497128/bcc84f6d-1e3f-4622-9938-7c1aa083e0b0)

Below are some screenshots for different regions and elements in-game, a cave. Along with some animation pictures, that were done in Blender. The deer's walk cycle has been animated manually (It's not the best). There is also a screenshot of a dragon following a butterfly. The dragon is officially taken from the Epic Games Marketplace.

![Cave, a special area in the game](https://github.com/VKG5/VR_Environment/assets/44497128/41d1837a-6596-41fc-ab20-91b5ac7413c2)
![Deer Walk Cycle Graph Editor snapshot from Blender](https://github.com/VKG5/VR_Environment/assets/44497128/f8b74492-018c-450c-a18f-fd6e4a139672)
![Dragon following butterfly](https://github.com/VKG5/VR_Environment/assets/44497128/9e7c1c6c-8bda-418e-a482-f97ad9e7d555)

Furthermore, the trees and foliage are Procedurally generated using PCG Graphs and Auto-Materials made in Unreal Engine itself. We have also attached a small technical report which can be found in the repo itself. This project was a lot of fun and aims at providing a solid foundation for further developers with various features such as hand tracking, animal AI, navigation boundaries, and various small quality of life features setup. Aiming to make VR development more accessible.

[Technical_Details.pdf](https://github.com/VKG5/VR_Environment/files/15153289/Augmented_Reality_Project_Report.pdf)

Thanks for stopping by! We are not sure about any future updates, but might make a few changes from time to time :)
