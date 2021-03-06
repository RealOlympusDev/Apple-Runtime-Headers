//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCImageProvider.h>

@class NSMutableArray, QCRegion;
@protocol QCPlugInOutputImageProvider;

__attribute__((visibility("hidden")))
@interface QCPlugOutputImage : QCImageProvider
{
    id <QCPlugInOutputImageProvider> _image;
    QCRegion *_region;
    struct CGColorSpace *_colorspace;
    NSMutableArray *_bufferFormats;
    NSMutableArray *_textureFormats;
}

+ (id)createProviderWithSource:(id)arg1 options:(id)arg2;
+ (BOOL)isCompatibleWithSource:(id)arg1 sourceMD5:(CDStruct_bdcb2b0d *)arg2;
- (id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned int)arg3 transformation:(id)arg4 bounds:(struct CGRect)arg5 colorSpace:(struct CGColorSpace *)arg6 options:(id)arg7;
- (id)supportedTextureBufferFormatsForManager:(id)arg1;
- (id)supportedTextureBufferTargetsForManager:(id)arg1;
- (id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
- (id)supportedPixelBufferFormatsForManager:(id)arg1;
- (BOOL)supportsCropping;
- (BOOL)hasAlpha;
- (struct CGColorSpace *)colorSpace;
- (id)domainOfDefinition;
- (void)dealloc;
- (void)finalize;
- (id)initWithImage:(id)arg1;

@end

