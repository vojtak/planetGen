// Copyright © 2008-2013 planetGen Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

#include <stdio.h>
#include <math.h>
#include "Surface.h"

int main(int argc, char* argv[]) {

	SurfaceTriangle *level1 = new SurfaceTriangle();
	level1->CreateD20();
	SurfaceTriangle *level2, *level3, *level4, *level5, *level6, *level7, *level8, *level9, *dite;
	level2 = level1->SubdivideSurface();
	level3 = level2->SubdivideSurface();
	level4 = level3->SubdivideSurface();
	level5 = level4->SubdivideSurface();
	level6 = level5->SubdivideSurface();
	level7 = level6->SubdivideSurface();
	//level8 = level7->SubdivideSurface();
	//level9 = level8->SubdivideSurface();

	dite = level7;

	dite->CreateSphericalCoordinates();

	//dite->PrintSurface();

	printf("Under von Construction %d %d %d\n", int(round(0.499)), int(round(0.500)), int(round(0.501)));
}
