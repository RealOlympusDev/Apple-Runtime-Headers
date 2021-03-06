//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSMutableArray, NUSpace;

@interface _NUTaggedSpace : NSObject <NSCopying>
{
    NSMutableArray *_tagNodes;
    NUSpace *_space;
}

@property(readonly) NUSpace *space; // @synthesize space=_space;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToTaggedImageSpace:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)mergeSpace:(id)arg1;
- (void)addTagNodes:(id)arg1;
- (void)addTagNode:(id)arg1;
- (id)tagNodes;
- (_Bool)hasTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpace:(id)arg1;
- (id)init;

@end

