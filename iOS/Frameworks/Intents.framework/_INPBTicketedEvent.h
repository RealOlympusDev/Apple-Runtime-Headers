//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTicketedEvent-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBLocationValue;

@interface _INPBTicketedEvent : PBCodable <_INPBTicketedEvent, NSSecureCoding, NSCopying>
{
    CDStruct_74e42c4c _has;
    _Bool __encodeLegacyGloryData;
    int _category;
    _INPBDateTimeRange *_eventDuration;
    _INPBLocationValue *_location;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) _INPBLocationValue *location; // @synthesize location=_location;
@property(retain, nonatomic) _INPBDateTimeRange *eventDuration; // @synthesize eventDuration=_eventDuration;
@property(nonatomic) int category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasEventDuration;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) _Bool hasCategory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

