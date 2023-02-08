class CfgPatches
{
	class SR_Vehicles
	{
		name="SR Vehicle Mod";
		author="Tengu";
		requiredVersion=0.0020000001;
		requiredAddons[]=
		{
			"SR_Core",
			"Steve_Ass_Ram"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]=
		{
			"SR_StormEagle"
		};
	};
};
class CfgVehicles
{
	class VTOL_SE_1;
	class HitPoints;
	class HitHull;
	class HitLAileron;
	class HitRAileron;
	class SR_StormEagle: VTOL_SE_1
	{
		armor=100;
		armorStructural=2;
		side=1;
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		faction="SR_Faction";
		editorSubcategory="EdSubcat_Planes";
		displayName="[SR] Storm Eagle";
		crew="TIOW_Tactical_IF_5";
		hiddenSelections[]=
		{
			"hull_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SR_Vehicles\Textures\SR_StormEagle_CO.paa"
		};
		radarRange=150000;
		canUseScanner=1;
		incomingMissileDetectionSystem="2+4+8+16";
		irScanToEyeFactor=1;
		irScanRangeMin=200;
		irScanRangeMax=10000;
		irScanGround=1;
		irTarget=1;
		irTargetSize=2;
		laserScanner=1;
		laserTarget=0;
		weaponLockSystem="2+4+8+16";
		nvScanner=1;
		radarTarget=1;
		radarTargetSize=2;
		radarType=4;
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		showAllTargets=2;
		ace_cargo_space=20;
		ace_cargo_hasCargo=1;
		visualTarget=1;
		visualTargetSize=1;
		cost=10000000;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=66;
				explosionShielding=1;
				name="HitHull";
				passThrough=0.5;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.02;
				depends="Total";
				material=-1;
			};
			class HitGear: HitHull
			{
				armor=66;
				material=-1;
				name="gear";
				passThrough=0;
			};
			class HitLAileron: HitHull
			{
				armor=66;
				explosionShielding=3;
				name="HitRotor1";
				passThrough=0.1;
				visual="Hit_RotorL";
				radius=0.44999999;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitRAileron: HitHull
			{
				armor=66;
				explosionShielding=3;
				name="HitRotor2";
				passThrough=0.1;
				visual="Hit_RotorR";
				radius=0.44999999;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLCRudder: HitLAileron
			{
			};
			class HitRRudder: HitRAileron
			{
			};
			class HitLCElevator: HitLAileron
			{
			};
			class HitRElevator: HitRAileron
			{
			};
			class HitEngine: HitHull
			{
				armor=66;
				explosionShielding=0.5;
				name="HitEngine";
				passThrough=0.1;
				visual="Hit_Engine";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="HitLAileron*0.33";
			};
			class HitEngine2: HitHull
			{
				armor=66;
				explosionShielding=0.5;
				name="HitEngine2";
				passThrough=0.1;
				visual="Hit_Engine2";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="HitRAileron*0.33";
			};
			class HitAvionics: HitHull
			{
				armor=66;
				explosionShielding=1;
				name="HitAvionics";
				passThrough=0.2;
				visual="Hit_Avionics";
				radius=0.2;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=66;
				explosionShielding=0.5;
				name="HitFuel";
				passThrough=0.5;
				visual="Hit_Fuel";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="0";
			};
		};
	};
};
class cfgMods
{
	author="Tengu";
	timepacked="1675254570";
};