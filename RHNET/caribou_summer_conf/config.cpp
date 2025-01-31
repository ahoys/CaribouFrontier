#define private		0
#define protected	1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified	3

#include "cfgMaterials.hpp"

class CfgPatches {
	class Caribou {
		units[] = {"Caribou"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData", "CABuildings", "CABuildings2", "CAMisc", "CARoads2"};
	};
};


class CfgVehicles {
	class ThingEffect;		// External class reference
	class ThingEffectLight;		// External class reference
	class ThingEffectFeather;	// External class reference
	class Land;			// External class reference
	



	class FXCrWindLeaf1 : ThingEffectLight {
		scope = protected;
		model = "\ca\plants2\clutter\cr_leaf.p3d";
		displayName = "Internal: FxCrWindLeaf1";
		airFriction2[] = {2, 2, 8};
		airFriction1[] = {1, 1, 4};
		airFriction0[] = {0.3, 0.3, 0.1};
		airRotation = 0.35;
		minHeight = 0.3;
		avgHeight = 5.5;
		maxHeight = 10.0;
	};
	
	class FXCrWindLeaf2 : FXCrWindLeaf1 {
		model = "\ca\plants2\clutter\cr_leaf2.p3d";
		displayName = "Internal: FxCrWindLeaf2";
	};
	
	class FXCrWindLeaf3 : FXCrWindLeaf1 {
		model = "\ca\plants2\clutter\cr_leaf3.p3d";
		displayName = "Internal: FxCrWindLeaf3";
	};
};

class CfgWorlds {
	class DefaultWorld {
		class Weather;	// External class reference
		class EnvSounds;
	};

	class Chernarus : DefaultWorld {
		class Grid {};
		class DayLightingBrightAlmost;	// External class reference
		class DayLightingRainy;	// External class reference
		class DefaultClutter;	// External class reference
		class Weather : Weather {
			class Lighting;	// External class reference
		};
	};
	class DefaultLighting;	// External class reference
	
	class Caribou : Chernarus {
		access = ReadOnlyVerified;
		worldId = 1;
		cutscenes[] = {"carintro01"};
		description = "Caribou Frontier";
		icon = "";
		worldName = "\RHNET\caribou_summer_conf\Caribou.wrp";
		pictureMap = "";
		pictureShot = "\RHNET\caribou_summer_data\data\caribou_selectisland.paa";
		longitude = 26;	// positive is east
		latitude = -68;	// positive is south

		class OutsideTerrain {
			satellite = "RHNET\caribou_summer_data\data\caribou_satout.paa";
			enableTerrainSynth = 1;
			
			class Layers {
				class Layer0 {
					nopx = "ca\CHERNARUS\data\cr_sterk_detail_nopx.paa";
					texture = "ca\CHERNARUS\data\cr_sterk_detail_co.paa";
				};
			};
		};

		startTime = 12:30;
		startDate = 13/5/2018;
		startWeather = 0.10;
		startFog = 0.2;
		forecastWeather = 0.20;
		forecastFog = 0.15;
		centerPosition[] = {4440, 3980, 500};
		seagullPos[] = {2912, 2748, 300};
		ilsPosition[] = {1832, 3060};
		ilsDirection[] = {0, 0.080, -0.8907};
		ilsTaxiIn[] = {1875, 3525, 1875, 3164, 1867, 3150, 1858, 3144, 1844, 3146, 1833, 3153, 1833, 3162};
		ilsTaxiOff[] = {1832, 3060, 1832, 3521, 1837, 3529, 1845, 3533, 1864, 3533, 1871, 3531, 1874, 3524, 1874, 3149};
		drawTaxiway = 1;

		seaMaterial = "#Caribou_Water";
		shoreMaterial = "#Caribou_Shore";
		shoreFoamMaterial = "#Caribou_ShoreFoam";

		class SecondaryAirports {};

		class Lighting : DefaultLighting {
			groundReflection[] = {0.06, 0.06, 0.03};
		};

		class DayLightingBrightAlmost : DayLightingBrightAlmost {
			deepNight[] = {-15, {0.05, 0.05, 0.06}, {0.001, 0.001, 0.002}, {0.02, 0.02, 0.05}, {0.003, 0.003, 0.003}, {0.0001, 0.0001, 0.0002}, {0.0001, 0.0001, 0.0002}, 0};
			fullNight[] = {-5, {0.05, 0.05, 0.05}, {0.02, 0.02, 0.02}, {0.04, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.01, 0.01, 0.02}, {0.08, 0.06, 0.06}, 0};
			sunMoon[] = {-3.75, {0.045, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.045, 0.04, 0.04}, {0.04, 0.04, 0.04}, {0.04, 0.035, 0.04}, {0.1, 0.08, 0.09}, 0.5};
			earlySun[] = {-2.5, {0.12, 0.1, 0.1}, {0.08, 0.06, 0.07}, {0.12, 0.1, 0.1}, {0.08, 0.06, 0.07}, {0.08, 0.07, 0.08}, {0.1, 0.1, 0.12}, 1};
			sunrise[] = {0, {{0.7, 0.45, 0.45}, 5.16+(-4)}, {{0.07, 0.09, 0.12}, 4.0+(-4)}, {{0.6, 0.47, 0.25}, 4.66+(-4)}, {{0.1, 0.09, 0.1}, 4.3+(-4)}, {{0.5, 0.4, 0.4}, 6.49+(-4)}, {{0.88, 0.51, 0.24}, 8.39+(-4)}, 1};
			earlyMorning[] = {3, {{0.65, 0.55, 0.55}, 6.04+(-4)}, {{0.08, 0.09, 0.11}, 4.5+(-4)}, {{0.55, 0.47, 0.25}, 5.54+(-4)}, {{0.1, 0.09, 0.1}, 5.02+(-4)}, {{0.5, 0.4, 0.4}, 7.05+(-4)}, {{0.88, 0.51, 0.24}, 8.88+(-4)}, 1};
			midMorning[] = {8, {{0.98, 0.85, 0.8}, 8.37+(-4)}, {{0.08, 0.09, 0.11}, 6.42+(-4)}, {{0.87, 0.47, 0.25}, 7.87+(-4)}, {{0.09, 0.09, 0.1}, 6.89+(-4)}, {{0.5, 0.4, 0.4}, 8.9+(-4)}, {{0.88, 0.51, 0.24}, 10.88+(-4)}, 1};
			morning[] = {16, {{1, 0.9, 0.95}, 13+(-4)}, {{0.20, 0.15, 0.17}, 10+(-4)}, {{1, 1, 0.9}, 12.67+(-4)}, {{0.17, 0.18, 0.19}, 11.71+(-4)}, {{0.24, 0.17, 0.15}, 12.42+(-4)}, {{0.28, 0.17, 0.12}, 14.42+(-4)}, 1};
			noon[] = {45, {{1, 0.95, 1}, 17.2+(-4)}, {{1.1, 1.1, 1.2}, 13.3+(-4)}, {{1, 1, 1}, 15+(-4)}, {{0.36, 0.37, 0.38}, 13.5+(-4)}, {{1, 1, 1.1}, 16+(-4)}, {{1.1, 1, 1}, 17+(-4)}, 1};
		};
		class DayLightingRainy : DayLightingRainy {};

		class Weather : Weather {
			class Lighting : Lighting {
				class BrightAlmost : DayLightingBrightAlmost {
					overcast = 0;
				};
				class Rainy : DayLightingRainy {
					overcast = 1.0;
				};
			};
		};
		clutterGrid = 1.0;
		clutterDist = 200;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "RHNET\caribou_summer_data\data\caribou_middetdist.paa";
		minTreesInForestSquare = 2;
		minRocksInRockSquare = 2;

		class EnvSounds : EnvSounds {
			class Caribou_Trees {
				name = "Caribou Ambient Trees";
				sound[] ={"\RHNET\caribou_sounds\sfx\treesfx.ogg", db+0, 1.0};
				volume = "trees*(1-rain)*(1-night)";
			};
		};
		
		class clutter {

			class Caribou_GrassCrooked : DefaultClutter {
				model = "RHNET\caribou_sounds\mdl\cl\rhnet_browngrass.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.4;
			};

			class Caribou_smGrassCrooked : DefaultClutter {
				model = "RHNET\caribou_sounds\mdl\cl\rhnet_browngrass.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.9;
			};

			class Caribou_GrassTall : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassTall.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			
			class Caribou_StubbleClutter : DefaultClutter {
				model = "ca\plants2\clutter\c_stubble.p3d";
				affectedByWind = 0.1;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.1;
			};
			
			class Caribou_AutumnFlowers : DefaultClutter {
				model = "ca\plants2\clutter\c_autumn_flowers.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			
			class Caribou_GrassBunch : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassBunch.p3d";
				affectedByWind = 0.35;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.0;
			};
			
			class Caribou_GrassCrookedGreen : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			
			class Caribou_GrassCrookedForest : DefaultClutter {
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.4;
			};
			
			class Caribou_WeedDead : DefaultClutter {
				model = "ca\plants2\clutter\c_WeedDead.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.1;
			};
			
			class Caribou_WeedDeadSmall : DefaultClutter {
				model = "ca\plants2\clutter\c_WeedDead2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 0.9;
			};
			
			class Caribou_HeatherBrush : DefaultClutter {
				model = "ca\plants2\clutter\c_caluna.p3d";
				affectedByWind = 0.15;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.8;
				surfaceColor[] = {0.53, 0.5, 0.37, 1};
			};
			
			class Caribou_WeedSedge : DefaultClutter {
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.85;
			};
			
			class Caribou_WeedTall : DefaultClutter {
				model = "ca\plants2\clutter\c_weed2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			
			class Caribou_BlueBerry : DefaultClutter {
				model = "ca\plants2\clutter\c_BlueBerry.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.4;
			};
			
			class Caribou_RaspBerry : DefaultClutter {
				model = "ca\plants2\clutter\c_raspBerry.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			
			class Caribou_FernAutumn : DefaultClutter {
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			
			class Caribou_FernAutumnTall : DefaultClutter {
				model = "ca\plants2\clutter\c_fernTall.p3d";
				affectedByWind = 0.15;
				scaleMin = 0.75;
				scaleMax = 1.25;
			};
			
			class Caribou_SmallPicea : DefaultClutter {
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.05;
				scaleMin = 0.60;
				scaleMax = 1.30;
			};
			
			class Caribou_PlantWideLeaf : DefaultClutter {
				model = "ca\plants2\clutter\c_WideLeafPlant.p3d";
				affectedByWind = 0.1;
				scaleMin = 1.0;
				scaleMax = 1.0;
			};
			
			class Caribou_MushroomsHorcak : DefaultClutter {
				model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
				affectedByWind = 0;
				scaleMin = 0.85;
				scaleMax = 1.25;
			};
			
			class Caribou_MushroomsPrasivka : Caribou_MushroomsHorcak {
				model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
			};
			
			class Caribou_MushroomsBabka : Caribou_MushroomsHorcak {
				model = "ca\plants2\clutter\c_MushroomBabka.p3d";
			};
			
			class Caribou_MushroomsMuchomurka : Caribou_MushroomsHorcak {
				model = "ca\plants2\clutter\c_MushroomMuchomurka.p3d";
			};

			class Caribou_TK_Stones_group : DefaultClutter {
				model = "ca\plants_e\clutter\c_StoneMiddleGroupCamp_EP1.p3d";
				affectedByWind = 0;
				scaleMin = 0.80;
				scaleMax = 1.40;
			};

			class Caribou_TK_Stones_mount : Caribou_TK_Stones_group {
				model = "ca\plants_e\clutter\c_StoneMiddleGroupMount_EP1.p3d";
			};

			class Caribou_TK_Stones_single : Caribou_TK_Stones_group {
				model = "ca\plants_e\clutter\c_StoneMiddleSharpSingle_EP1.p3d";
			};

			class Caribou_TK_Stones_round : Caribou_TK_Stones_group {
				model = "ca\plants_e\clutter\c_StoneSmallRounded_EP1.p3d";
			};
		};
		
		
		class Names {
			class Caribou_isl001 {
				name = "Rocky Pit";
				position[] = {1743, 6993};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl002 {
				name = "Raven Rock";
				position[] = {1408, 7224};
				type = "NameCityCapital";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl003 {
				name = "Tin Can Isle";
				position[] = {6388, 3519};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl004 {
				name = "Rabbit Rock";
				position[] = {2253, 7520};
				type = "RockArea";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl005 {
				name = "";
				position[] = {1443, 7348};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl006 {
				name = "Caddis Fell";
				position[] = {3643, 5275};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl007 {
				name = "Point Rocks";
				position[] = {3346, 5789};
				type = "RockArea";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl008 {
				name = "Mistle hill";
				position[] = {3585, 4400};
				type = "ViewPoint";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl009 {
				name = "Ferrymen Bay";
				position[] = {2670, 5027};
				type = "NameMarine";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl010 {
				name = "Beringovo more";
				position[] = {6210, 7679};
				type = "NameMarine";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl011 {
				name = "Dredge Forest";
				position[] = {4137, 3177};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl012 {
				name = "Severnogo zaliva";
				position[] = {4045, 5856};
				type = "NameMarine";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl013 {
				name = "South Bay";
				position[] = {2303, 1752};
				type = "NameMarine";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl014 {
				name = "Keno Hill";
				position[] = {5024, 2350};
				type = "ViewPoint";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl015 {
				name = "Mountain Rage AFB";
				position[] = {1784, 3439};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl016 {
				name = "Steelview Stand";
				position[] = {1692, 3991};
				type = "ViewPoint";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl017 {
				name = "Uphill Woods";
				position[] = {1484, 4206};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl018 {
				name = "East Station";
				position[] = {3200, 2471};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};


			class Caribou_isl019 {
				name = "War district";
				position[] = {2947, 2593};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl020 {
				name = "West Station";
				position[] = {2584, 2740};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl021 {
				name = "North Station";
				position[] = {3094, 3148};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl022 {
				name = "Oil Bay";
				position[] = {2965, 2738};
				type = "NameCity";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl023 {
				name = "Cosyton Saw";
				position[] = {2552, 3884};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl024 {
				name = "Brigade Halls";
				position[] = {4219, 4059};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl025 {
				name = "Severnoj nasosnoj stantsii";
				position[] = {5108, 6801};
				type = "ViewPoint";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl026 {
				name = "Blaise End stantsii";
				position[] = {5006, 5075};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl027 {
				name = "";
				position[] = {4642, 1995};
				type = "ViewPoint";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl028 {
				name = "Hightower";
				position[] = {4734, 1886};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl029 {
				name = "Eastside Port";
				position[] = {5482, 1416};
				type = "NameVillage";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl030 {
				name = "";
				position[] = {4374, 1217};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};


			class Caribou_isl031 {
				name = "Shallow Valley";
				position[] = {5409, 2552};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl032 {
				name = "Valleypoint";
				position[] = {5662, 2937};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl033 {
				name = "Lightpeak";
				position[] = {1357, 1756};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl034 {
				name = "Shooting range";
				position[] = {1064, 3075};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl035 {
				name = "Fort Crassus";
				position[] = {951, 3678};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};
			
			class Caribou_isl036 {
				name = "";
				position[] = {4280, 2599};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};
			
			class Caribou_isl037 {
				name = "";
				position[] = {3925, 3469};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl038 {
				name = "";
				position[] = {4184, 3874};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl039 {
				name = "";
				position[] = {1401, 2379};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl040 {
				name = "";
				position[] = {2147, 3853};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl041 {
				name = "";
				position[] = {1553, 3182};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl042 {
				name = "";
				position[] = {5440, 5792};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl043 {
				name = "";
				position[] = {5434, 6559};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl044 {
				name = "";
				position[] = {4557, 4128};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl045 {
				name = "Old Cove";
				position[] = {5933, 3460};
				type = "NameMarine";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl046 {
				name = "";
				position[] = {4345, 1123};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl047 {
				name = "";
				position[] = {3440, 3915};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl048 {
				name = "";
				position[] = {1948, 7287};
				type = "VegetationFir";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl049 {
				name = "Wintry Station";
				position[] = {1788, 7436};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl050 {
				name = "Sklon Holma zastava";
				position[] = {5890, 5629};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl051 {
				name = "карибу пограничной";
				position[] = {4798, 4773};
				type = "NameCity";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl052 {
				name = "Communications Station";
				position[] = {5266, 3613};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl053 {
				name = "Outpost East";
				position[] = {5693, 4208};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl054 {
				name = "Outpost West";
				position[] = {3402, 5935};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};

			class Caribou_isl055 {
				name = "Valleyside Outpost";
				position[] = {5345, 2307};
				type = "NameLocal";
				speech[] = {};
				radiusA = 100;
				radiusB = 100;
				angle = 0.0;
			};
		};
	};
};

class CfgWorldList {
	class Caribou {};
};

class CfgMissions {
	class Cutscenes {
		class carintro01 {
			directory = "RHNET\caribou_summer_data\data\Scenes\intro.Caribou";
		};
	};
};

class CfgSurfaces {
	class Default {};
	
	class Water {};

	class CARIBOU_FOREST01 : Default {
		access = ReadOnly;
		files = "caribou_cr_vres_*";
		rough = 0.20;
		dust = 0.2;
		soundEnviron = "grass";
		character = "Caribou_forestclutter";
		soundHit = "soft_ground";
	};


	class CARIBOU_FOREST02 : Default {
		access = ReadOnly;
		files = "caribou_cr_les2_*";
		rough = 0.20;
		dust = 0.2;
		soundEnviron = "grass";
		character = "Caribou_forestclutter2";
		soundHit = "soft_ground";
	};

	class CARIBOU_GRASS01 : Default {
		access = ReadOnly;
		files = "caribou_grass_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "drygrass";
		character = "Caribou_grassclutter";
		soundHit = "soft_ground";
	};

	class CARIBOU_GRASS02 : Default {
		access = ReadOnly;
		files = "caribou_cr_travad1_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "Caribou_grassclutter3";
		soundHit = "soft_ground";
	};

	class CARIBOU_GRAVEL01 : Default {
		access = ReadOnly;
		files = "cr_sterk_*";
		rough = 0.20;
		dust = 0.2;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
	};
	
	class CARIBOU_GRAVEL02 : Default {
		access = ReadOnly;
		files = "ut_hlina_*";
		rough = 0.20;
		dust = 0.2;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
	};
	
	class CARIBOU_ROCK01 : Default {
		access = ReadOnly;
		files = "cr_skala_*";
		rough = 0.20;
		dust = 0.1;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};

	class CARIBOU_ROCK02 : Default {
		access = ReadOnly;
		files = "ut_valouny_*";
		rough = 0.20;
		dust = 0.1;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
	};

	class CARIBOU_BETON01 : Default {
		access = ReadOnly;
		files = "cr_beton_*";
		rough = 0.02;
		dust = 0.03;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
};

class CfgSurfaceCharacters {

	class caribou_grassclutter {
		probability[] = {0.3, 0.3, 0.01, 0.01};
		names[] = {"Caribou_GrassTall", "Caribou_AutumnFlowers", "Caribou_TK_Stones_group", "Caribou_TK_Stones_mount"};
	};

	class caribou_grassclutter2 {
		probability[] = {0.78, 0.08, 0.01, 0.03};
		names[] = {"Caribou_GrassCrookedGreen", "Caribou_AutumnFlowers", "Caribou_WeedDead", "Caribou_SmallPicea"};
	};

	class caribou_grassclutter3 {
		probability[] = {0.01, 0.2, 0.02, 0.02, 0.03, 0.02, 0.01, 0.03};
		names[] = {"Caribou_FernAutumn", "Caribou_smGrassCrooked", "Caribou_AutumnFlowers", "Caribou_WeedTall", "Caribou_TK_Stones_group", "Caribou_TK_Stones_single", "Caribou_TK_Stones_mount", "Caribou_TK_Stones_round"};
	};

	class caribou_forestclutter {
		probability[] = {0.55, 0.05, 0.001, 0.003, 0.01, 0.2, 0.1};
		names[] = {"Caribou_BlueBerry", "Caribou_FernAutumn", "Caribou_MushroomsHorcak", "Caribou_MushroomsPrasivka", "Caribou_SmallPicea", "Caribou_GrassCrookedGreen", "Caribou_AutumnFlowers"};
	};

	class caribou_forestclutter2 {
		probability[] = {0.4, 0.05, 0.15, 0.001, 0.003, 0.01, 0.2, 0.05};
		names[] = {"Caribou_BlueBerry", "Caribou_FernAutumn", "Caribou_GrassCrooked", "Caribou_MushroomsHorcak", "Caribou_MushroomsPrasivka", "Caribou_SmallPicea", "Caribou_RaspBerry", "Caribou_AutumnFlowers"};
	};

	class caribou_forestclutter3 {
		probability[] = {0.55, 0.01, 0.015, 0.08, 0.001, 0.003, 0.08, 0.04, 0.01};
		names[] = {"Caribou_BlueBerry", "Caribou_FernAutumnTall", "Caribou_FernAutumn", "Caribou_GrassCrooked", "Caribou_MushroomsHorcak", "Caribou_MushroomsPrasivka", "Caribou_SmallPicea", "Caribou_RaspBerry", "Caribou_AutumnFlowers"};
	};

};
