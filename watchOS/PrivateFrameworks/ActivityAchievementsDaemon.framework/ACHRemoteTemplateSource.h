//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHTemplateSource-Protocol.h>

@class ACHBackCompatRemoteAchievementAvailabilityKeyWriting, ACHMobileAssetProvider, NSDictionary, NSString;
@protocol ACHTemplateSourceDelegate, OS_dispatch_queue;

@interface ACHRemoteTemplateSource : NSObject <ACHTemplateSource>
{
    NSString *_buildVersionOverride;
    NSObject<ACHTemplateSourceDelegate> *delegate;
    ACHMobileAssetProvider *_mobileAssetProvider;
    ACHBackCompatRemoteAchievementAvailabilityKeyWriting *_backCompatAvailabilityKeyWriter;
    NSDictionary *_resourceAssetURLsByUniqueName;
    NSDictionary *_stickerAssetURLsByUniqueName;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *stickerAssetURLsByUniqueName; // @synthesize stickerAssetURLsByUniqueName=_stickerAssetURLsByUniqueName;
@property(retain, nonatomic) NSDictionary *resourceAssetURLsByUniqueName; // @synthesize resourceAssetURLsByUniqueName=_resourceAssetURLsByUniqueName;
@property(retain, nonatomic) ACHBackCompatRemoteAchievementAvailabilityKeyWriting *backCompatAvailabilityKeyWriter; // @synthesize backCompatAvailabilityKeyWriter=_backCompatAvailabilityKeyWriter;
@property(retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider; // @synthesize mobileAssetProvider=_mobileAssetProvider;
@property(nonatomic) __weak NSObject<ACHTemplateSourceDelegate> *delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)setBuildVersionOverride:(id)arg1;
- (void)_removeURLsByUniqueNameFromDictionary:(id)arg1 fromAsset:(id)arg2;
- (void)_addURLsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2;
- (id)_resourceAssetURLForTemplate:(id)arg1;
- (id)buildVersion;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)sourceShouldRunForDate:(id)arg1;
@property(readonly, nonatomic) int runCadence;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithMobileAssetProvider:(id)arg1 backCompatWriter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

