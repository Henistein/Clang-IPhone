/*!
 *  @header MPSImageIntegral.h
 *  @framework MetalPerformanceShaders.framework
 *
 *  @copyright Copyright (c) 2015 Apple Inc. All rights reserved.
 *  @abstract Metal Image integral filters
 */

#ifndef MPS_MPSImageIntegral_h
#define MPS_MPSImageIntegral_h

#include <MetalPerformanceShaders/MPSImageKernel.h>

/*!
 *  @class      MPSImageIntegral
 *  @discussion The MPSImageIntegral calculates the sum of pixels over a specified region in the image.
 *              The value at each position is the sum of all pixels in a source image rectangle, sumRect:
 *
 *                  sumRect.origin = MPSUnaryImageKernel.offset
 *                  sumRect.size = dest_position - MPSUnaryImageKernel.clipRect.origin
 *
 *              If the channels in the source image are normalized, half-float or floating values,
 *              the destination image is recommended to be a 32-bit floating-point image.
 *              If the channels in the source image are integer values, it is recommended that
 *              an appropriate 32-bit integer image destination format is used.
 */
NS_CLASS_AVAILABLE( NA, 9_0  )
@interface  MPSImageIntegral : MPSUnaryImageKernel

@end    /* MPSImageIntegral */


/*!
 *  @class      MPSImageIntegralOfSquares
 *  @discussion The MPSImageIntegralOfSquares calculates the sum of squared pixels over a specified region in the image.
 *              The value at each position is the sum of all squared pixels in a source image rectangle, sumRect:
 *
 *                  sumRect.origin = MPSUnaryImageKernel.offset
 *                  sumRect.size = dest_position - MPSUnaryImageKernel.clipRect.origin
 *
 *              If the channels in the source image are normalized, half-float or floating values,
 *              the destination image is recommended to be a 32-bit floating-point image.
 *              If the channels in the source image are integer values, it is recommended that
 *              an appropriate 32-bit integer image destination format is used.
 */
NS_CLASS_AVAILABLE( NA, 9_0  )
@interface  MPSImageIntegralOfSquares : MPSUnaryImageKernel

@end    /* MPSImageIntegralOfSquares */

#endif  /* MPS_MSImageIntegral_h */

