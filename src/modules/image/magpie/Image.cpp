/**
 * Copyright (c) 2006-2015 LOVE Development Team
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 **/

#include "Image.h"

#include "ImageData.h"
#include "CompressedData.h"

#include "DevilHandler.h"

#include "ddsHandler.h"
#include "PVRHandler.h"
#include "KTXHandler.h"
#include "PKMHandler.h"

namespace love
{
namespace image
{
namespace magpie
{

Image::Image()
{
	formatHandlers.push_back(new DevilHandler);

	compressedFormatHandlers.push_back(new DDSHandler);
	compressedFormatHandlers.push_back(new PVRHandler);
	compressedFormatHandlers.push_back(new KTXHandler);
	compressedFormatHandlers.push_back(new PKMHandler);
}

Image::~Image()
{
	// ImageData objects reference the FormatHandlers in our list, so we should
	// release them instead of deleting them completely here.
	for (FormatHandler *handler : formatHandlers)
		handler->release();

	for (CompressedFormatHandler *handler : compressedFormatHandlers)
		handler->release();
}

const char *Image::getName() const
{
	return "love.image.magpie";
}

love::image::ImageData *Image::newImageData(love::filesystem::FileData *data)
{
	return new ImageData(formatHandlers, data);
}

love::image::ImageData *Image::newImageData(int width, int height)
{
	return new ImageData(formatHandlers, width, height);
}

love::image::ImageData *Image::newImageData(int width, int height, void *data, bool own)
{
	return new ImageData(formatHandlers, width, height, data, own);
}

love::image::CompressedData *Image::newCompressedData(love::filesystem::FileData *data)
{
	return new CompressedData(compressedFormatHandlers, data);
}

bool Image::isCompressed(love::filesystem::FileData *data)
{
	for (CompressedFormatHandler *handler : compressedFormatHandlers)
	{
		if (handler->canParse(data))
			return true;
	}

	return false;
}

} // magpie
} // image
} // love
