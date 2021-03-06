//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProtectedCloudStorage/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface PCSManateeShareInvitation : PBCodable <NSCopying>
{
    NSData *_exportedPCSData;
    NSData *_shareePublicKeyData;
}

@property(retain, nonatomic) NSData *shareePublicKeyData; // @synthesize shareePublicKeyData=_shareePublicKeyData;
@property(retain, nonatomic) NSData *exportedPCSData; // @synthesize exportedPCSData=_exportedPCSData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasShareePublicKeyData;
@property(readonly, nonatomic) BOOL hasExportedPCSData;

@end

