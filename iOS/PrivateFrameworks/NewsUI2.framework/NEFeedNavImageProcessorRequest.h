//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/TSProcessedImageRequestType-Protocol.h>

@class NSDictionary, NSString;

@interface NEFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType>
{
    // Error parsing type: , name: assetHandles
    // Error parsing type: , name: feedNavImageSize
    // Error parsing type: , name: scale
    // Error parsing type: , name: cornerRadius
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *cacheIdentifier;
- (id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(struct CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4;
@property(nonatomic, copy) NSDictionary *assetHandles;

@end

