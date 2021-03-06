//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSSecureCoding>
{
    BOOL _isDeviceOwnedByCurrentUser;
    NSString *_idsIdentifier;
    NSString *_idsFirstRoutableInternetDestination;
    NSString *_rapportEffectiveIdentifier;
    NSString *_mediaSystemIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property(copy, nonatomic) NSString *idsFirstRoutableInternetDestination; // @synthesize idsFirstRoutableInternetDestination=_idsFirstRoutableInternetDestination;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic, setter=setDeviceOwnedByCurrentUser:) BOOL isDeviceOwnedByCurrentUser; // @synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)_init;

@end

