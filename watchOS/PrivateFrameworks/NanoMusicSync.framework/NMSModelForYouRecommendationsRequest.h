//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelForYouRecommendationsRequest.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest
{
    _Bool _nms_useCachedDataOnly;
    NSArray *_nms_cachedRecommendationsArray;
    NSDictionary *_nms_cachedStoreItemMetadataResults;
}

@property(retain, nonatomic) NSDictionary *nms_cachedStoreItemMetadataResults; // @synthesize nms_cachedStoreItemMetadataResults=_nms_cachedStoreItemMetadataResults;
@property(retain, nonatomic) NSArray *nms_cachedRecommendationsArray; // @synthesize nms_cachedRecommendationsArray=_nms_cachedRecommendationsArray;
@property(nonatomic) _Bool nms_useCachedDataOnly; // @synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end

