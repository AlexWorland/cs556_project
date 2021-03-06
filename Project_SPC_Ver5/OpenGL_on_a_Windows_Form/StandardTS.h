///-------------------------------------------------------------------------------------------------
// file:	StandardTS.h
//
// summary:	Declares the standard time series class
///-------------------------------------------------------------------------------------------------

#include "stdafx.h"
#include "ClassData.h"
#include "FileHandling.h"

#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////////
/// <summary>	A standard ts. </summary>
///
/// <author> Phillipe Shin 02/24/2019 </author>
/// <editor> Paul Collet </edit>
////////////////////////////////////////////////////////////////////////////////////////////////////

class StandardTS
{

public:

	/// <summary>	The class data. </summary>
	ClassData data;
	/// <summary>	The new file. </summary>
	FileHandling newFile;
	/// <summary>	The converted values. </summary>
	std::vector<std::vector<float> > convertedValues;

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Default constructor. </summary>
	///
	/// <author> Phillipe Shin 02/24/2019 </author>
	/// <editor> Paul Collet </edit>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	StandardTS() {};

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Constructor. </summary>
	///
	/// <author> Phillipe Shin 02/24/2019 </author>
	/// <editor> Paul Collet </edit>
	///
	/// <param name="parameter1">	[in,out] The first parameter. </param>
	/// <param name="parameter2">	The second parameter. </param>
	/// <param name="parameter3">	The third parameter. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	StandardTS(ClassData&, double, double);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Sort graph 2. </summary>
	///
	/// <author> Phillipe Shin 02/24/2019 </author>
	/// <editor> Paul Collet </edit>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void sortGraph2();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Normalize data. </summary>
	///
	/// <author> Phillipe Shin 02/24/2019 </author>
	/// <editor> Paul Collet </edit>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void normalizeData();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Fill graph locations. </summary>
	///
	/// <author> Phillipe Shin 02/24/2019 </author>
	/// <editor> Paul Collet </edit>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void fillGraphLocations();

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Draw data. </summary>
	///
	/// <author> Phillipe Shin 02/24/2019 </author>
	/// <editor> Paul Collet </edit>
	///
	/// <param name="x1">   	The first x value. </param>
	/// <param name="y1">   	The first y value. </param>
	/// <param name="index">	Zero-based index of the. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void drawData(float x1, float y1, int index);
	void display();

};

