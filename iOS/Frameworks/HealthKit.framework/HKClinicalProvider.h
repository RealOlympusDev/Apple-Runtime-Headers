//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKClinicalBrandable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalBrand, NSArray, NSString, NSURL;

@interface HKClinicalProvider : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable>
{
    NSString *_externalID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_location;
    NSURL *_informationURL;
    HKClinicalBrand *_brand;
    NSArray *_gateways;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *gateways; // @synthesize gateways=_gateways;
@property(readonly, copy, nonatomic) HKClinicalBrand *brand; // @synthesize brand=_brand;
@property(readonly, copy, nonatomic) NSURL *informationURL; // @synthesize informationURL=_informationURL;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isSupported) _Bool supported;
@property(readonly, copy) NSString *description;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 location:(id)arg4 informationURL:(id)arg5 brand:(id)arg6 gateways:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

