//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureSet.h>

@class NSSet;

@interface _REFeatureSet : REFeatureSet
{
    NSSet *_features;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (_Bool)containsFeature:(id)arg1;
- (id)featureWithName:(id)arg1;
- (unsigned int)count;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;
- (id)init;

@end

