/**
 * Copyright (c) 2006-2014 LOVE Development Team
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

#ifndef LOVE_IMAGE_MAGPIE_COMPRESSED_HANDLER_H
#define LOVE_IMAGE_MAGPIE_COMPRESSED_HANDLER_H

// LOVE
#include "filesystem/FileData.h"
#include "image/CompressedData.h"
#include "common/Object.h"

namespace love
{
namespace image
{
namespace magpie
{

/**
 * Base class for all CompressedData parser library interfaces.
 * We inherit from love::Object to take advantage of reference counting...
 **/
class CompressedFormatHandler : public love::Object
{
public:

	CompressedFormatHandler() {}
	virtual ~CompressedFormatHandler() {}

	/**
	 * Determines whether a particular FileData can be parsed as CompressedData
	 * by this handler.
	 * @param data The data to parse.
	 **/
	virtual bool canParse(const filesystem::FileData *data) = 0;

	/**
	 * Parses compressed image filedata into a list of sub-images and returns
	 * a single block of memory containing all the images.
	 *
	 * @param[in] filedata The data to parse.
	 * @param[out] image The list of sub-images generated. Byte data is a pointer
	 *             to the returned data.
	 * @param[out] dataSize The total size in bytes of the returned data.
	 * @param[out] format The format of the Compressed Data.
	 *
	 * @return The single block of memory containing the parsed images.
	 **/
	virtual uint8 *parse(filesystem::FileData *filedata, std::vector<CompressedData::SubImage> &images, size_t &dataSize, CompressedData::Format &format) = 0;

}; // CompressedFormatHandler

} // magpie
} // image
} // love

#endif // LOVE_IMAGE_MAGPIE_COMPRESSED_HANDLER_H
