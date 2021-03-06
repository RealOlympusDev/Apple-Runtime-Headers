//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>

@class HMFNetMonitor, NSArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate>
{
    NSMutableSet *_assets;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFNetMonitor *_netMonitor;
    NSMutableSet *_registeredMetadata;
}

+ (id)logCategory;
+ (id)sharedManager;
@property(readonly) NSMutableSet *registeredMetadata; // @synthesize registeredMetadata=_registeredMetadata;
@property(readonly, nonatomic) HMFNetMonitor *netMonitor; // @synthesize netMonitor=_netMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)auditAsset:(id)arg1;
- (id)assetForDocumentationMetadata:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
@property(readonly) NSArray *assets;
- (void)unregisterDocumentationMetadata:(id)arg1;
- (void)registerDocumentationMetadata:(id)arg1;
- (void)parseCachedAssets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

