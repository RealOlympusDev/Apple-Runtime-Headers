//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBScoredValue, _INPBValueMetadata;

@protocol _INPBMediaItemValue <NSObject>
+ (Class)topicsType;
+ (Class)namedEntitiesType;
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) unsigned long long topicsCount;
@property(copy, nonatomic) NSArray *topics;
@property(readonly, nonatomic) BOOL hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long namedEntitiesCount;
@property(copy, nonatomic) NSArray *namedEntities;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasArtwork;
@property(retain, nonatomic) _INPBImageValue *artwork;
@property(readonly, nonatomic) BOOL hasArtist;
@property(copy, nonatomic) NSString *artist;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
- (_INPBScoredValue *)topicsAtIndex:(unsigned long long)arg1;
- (void)addTopics:(_INPBScoredValue *)arg1;
- (void)clearTopics;
- (_INPBScoredValue *)namedEntitiesAtIndex:(unsigned long long)arg1;
- (void)addNamedEntities:(_INPBScoredValue *)arg1;
- (void)clearNamedEntities;
@end

