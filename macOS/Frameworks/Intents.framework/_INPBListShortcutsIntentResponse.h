//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBListShortcutsIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBListShortcutsIntentResponse : PBCodable <_INPBListShortcutsIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSArray *_shortcuts;
}

+ (BOOL)supportsSecureCoding;
+ (Class)shortcutsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *shortcuts; // @synthesize shortcuts=_shortcuts;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)shortcutsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long shortcutsCount;
- (void)addShortcuts:(id)arg1;
- (void)clearShortcuts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

