//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPContainerEdit-Protocol.h>

@class NSArray, NSIndexSet, NSUUID;
@protocol MSPImmutableObject;

@protocol MSPContainerEditAddition <MSPContainerEdit>
@property(readonly, nonatomic) NSIndexSet *indexesOfAddedObjects;
@property(readonly, nonatomic) NSArray *addedImmutableObjects;
- (NSUUID *)identifierForObjectAtopAddedImmutableObject:(id <MSPImmutableObject>)arg1;
@end

