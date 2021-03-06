//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/NRDevicePropertyObserver-Protocol.h>

@class HDProfile, NRDevice, NSString;
@protocol HDGymKitSettingsDelegate;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver>
{
    HDProfile *_profile;
    unsigned int _nfcPermission;
    struct os_unfair_lock_s _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
    id <HDGymKitSettingsDelegate> _delegate;
}

@property(nonatomic) __weak id <HDGymKitSettingsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(_Bool)arg1;
- (void)_enableNFCAlwaysOnIfWatchWorkout;
- (void)_stopObservingWatchWorkouts;
- (void)_startObservingWatchWorkouts;
- (void)_handleNFCPreferencesForNFCAlwaysOn:(_Bool)arg1;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)_monitorFieldAndPrivacySettings;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
@property(readonly, nonatomic) _Bool fitnessTrackingEnabled;
@property(readonly, nonatomic) unsigned int nfcPermission;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

