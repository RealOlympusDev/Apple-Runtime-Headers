//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGBaseTexture.h>

@interface PXGImageTexture : PXGBaseTexture
{
    struct CGImage *_sourceCGImage;
    struct __CVBuffer *_sourceCVPixelBuffer;
}

+ (id)_sharedCIContext;
- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_ac168a83 *)arg3 spriteStyles:(const CDStruct_506f5052 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (struct CGImage *)imageRepresentation;
// Error parsing type for property orientationTransform:
// Property attributes: T,R,N

- (void)dealloc;
@property(nonatomic) struct __CVBuffer *sourceCVPixelBuffer;
@property(nonatomic) struct CGImage *sourceCGImage;
- (id)init;

@end

