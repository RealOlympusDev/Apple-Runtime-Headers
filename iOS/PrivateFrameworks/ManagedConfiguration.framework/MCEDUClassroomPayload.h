//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class CRKEDUPayload, NSArray, NSData, NSDictionary, NSString;

@interface MCEDUClassroomPayload : MCPayload
{
    CRKEDUPayload *_crk_payload;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) CRKEDUPayload *crk_payload; // @synthesize crk_payload=_crk_payload;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *resourcePayloadCertificatePersistentID;
@property(copy, nonatomic) NSString *resourcePayloadCertificateUUID;
@property(retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID;
@property(retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID;
@property(retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property(retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID;
@property(retain, nonatomic) NSData *payloadCertificatePersistentID;
@property(copy, nonatomic) NSString *payloadCertificateUUID;
- (id)translatedCRKError:(id)arg1;
- (id)payloadDescriptionKeyValueSections;
- (id)title;
- (id)stubDictionary;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

