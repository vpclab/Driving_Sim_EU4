Driving Simulator 

	Project Scope:
		The project is a driving simulation that will take place in a virtual city of Wichita. Autonomoous vehicles will be driving through the city 
		and the user will undergo multiple scenearios created by the researcher. The user will be tasked to follow an automonous vehicle, in which
		different events may occur during the experimentation depending on the desired seneario. The user may encounter a hazard from multiple sources 
		and must attempt to react to such events. Or the user could be tasked with soley observation to identify a potential hazard. The program will be 
		track multiple parameters if desired by the researcher, including follow distance, lane deviation, reaction time, etc.

v0.0 Brian Inglis 9/15/2017
	The project currently has a virtual down town city with automonus vehicles able to drive along pre-defined splines. The project contains usable humanoid mesh (to be 
	used as hazard), working lights, function vehicles that responed to signals, usable player vehilces. The automonus vehicles can currently track the "lead vehilce" from 
	a direct cast to locate the position and adjust speed accordingly to avoid collison.

v0.1 Brian Inglis 9/22/2017
	Finished implementing an advanced detection component to the automonus vehicles. The vehicles now can see any wheeled vechile in front of them within a defined distance.
	No longer casting to specific vehicle. The vehicle will adjust speeds accordingly once it detects a vechile.

v0.2 Brian Inglis 9/28/2017
	Fine tuned the vehilces gear shifting to avoid hitting the red line before shifting (Vehicles do not drive as if in a race). 
	Implemented a desired speed variable that will control the speed of the vehilce. The speed can be changed on different vehicles of the same blueprint. Future component of 
	speed limit sign.

v0.3 Brian Inglis 10/20/2017
	Created a "personality" for the automonous vehicles that can be switched on or off. The vehicles now have an "aggresive" mode that will go above the speed limit and 
	change lanes swerveing through traffic (will no longer slow down when vehilce is detected, rather it will speed up and attempt to pass the vehicle).
	Added a fine tuned tire config adding more friction to the tires to remove the slippery movement of the vehilces.

v0.4 Brian Inglis 11/2/2017
	Implemented the Blueprints consisting of the current spline and created a C++ version that does not include a mesh attached to it. The spline is added in the same way 
	by drag and dropping into scene, however with no mesh attached it can be safely placed ontop of the roads. 

v0.5 Brian Inglis 11/3/2017
	Desired speed is now indicated in MPH instead of KMH
	Implemented functioning speed limit signs that access the Desired Speed to set the vehicles movement speed.
	Reworked the design and flow of the spline following sequence in Blueprint. The Design now allows for changing the followed spline while the project is being ran. This 
	gives the cars the ability to change lanes.
	Changing Lanes protocol is now functional.

v0.6 Brian Inglis 11/10/2017
	The vehicle camera will now move depending on the movement of the car simulating the forcer that is applied on the driver when the vehicle turns (Option can be turned on
	or off). 
	The automonous vehilces will use the turning signals when changing lanes or making a turn.

v0.7 Brian Inglis 11/16/2017
	Vehicles will now adjust speed accordingly when a turn in the spline is upcoming (used to avoid vehicles from driving off the road or into oncoming traffic).

v0.8 Brian Inglis 11/20/2017
	Created a multiple monitor setup that when the game runs multiple cameras will open allowing for the user to use three monitor with different viewport.

v0.9 Brian Inglis 11/22/2017
	Created an animation blueprint with some blended animations for a deer mesh to be used as a potential hazard in implementations of the project. 
	The deer can move between multiple preset waypoints. Contains an idle, running, walking states/animations.

v0.9 Brian Inglis 11/28/2017
	The Deer mesh will go ragdoll when collided with any wheeled vehilce.

