//
//  FMCGSurface.h
//  CIMicroPaint
//
//  Created by August Mueller on 8/13/13.
//
//

#import <Foundation/Foundation.h>



@interface FMCGSurface : NSObject

+ (id)surfaceWithSize:(NSSize)s;
+ (id)iosurfaceWithSize:(NSSize)s CGLContext:(CGLContextObj)cglCtx pixelFormat:(CGLPixelFormatObj)pf colorSpace:(CGColorSpaceRef)colorSpace;
+ (id)glSurfaceWithSize:(NSSize)s CGLContext:(CGLContextObj)cglCtx pixelFormat:(CGLPixelFormatObj)pf colorSpace:(CGColorSpaceRef)colorSpace;

- (CIImage*)image;
- (CGImageRef)CGImage __attribute__((cf_returns_retained));
- (CGImageRef)createCGImageWithNoFaults __attribute__((cf_returns_retained));

- (void)clear;
- (void)clearRect:(NSRect)r;
- (void)drawRect:(NSRect)r onSurfaceWithBlock:(void (^)())b;

- (BOOL)reshapeToSize:(NSSize)s;

- (void)setImage:(CIImage *)im dirtyRect:(CGRect)r;
- (void)compositeOverImage:(CIImage*)img dirtyRect:(CGRect)dirtyRect;

- (CGRect)extent;

@end
