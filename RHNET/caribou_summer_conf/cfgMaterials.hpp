class CfgMaterials {

	class Water;
	class Caribou_Water : Water {
		ambient[] = {0.03,0.03,0.03,0.4};
		diffuse[] = {0.13,0.13,0.10,1};
		forcedDiffuse[] = {0.02,0.02,0.02,0};
		specular[] = {1.2,1.2,1.2,0};
		emmisive[] = {0,0,0,0};
	};

	class Shore;
	class Caribou_Shore : Shore {
		ambient[] = {0.03,0.03,0.03,0.4};
		diffuse[] = {0.13,0.13,0.10,1};
		forcedDiffuse[] = {0.02,0.02,0.02,0};
		specular[] = {1.2,1.2,1.2,0};
		emmisive[] = {0,0,0,0};
	};

	class ShoreFoam;
	class Caribou_ShoreFoam : ShoreFoam {
		ambient[] = {0.05, 0.03, 0, 0.6};
		diffuse[] = {0.05, 0.03, 0, 1.0};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {1.2,1.2,1.2,0};
		emmisive[] = {0,0,0,0};
	};

};