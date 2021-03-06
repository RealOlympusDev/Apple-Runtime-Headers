//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WNUIClientBundleManager : NSObject
{
    NSMutableDictionary *_bundleIdentifierToClientInfo;
    NSMutableDictionary *_universalApplicationIdentifierToClientInfo;
    NSMutableArray *_dynamicBundleIdentifierToClientInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *dynamicBundleIdentifierToClientInfo; // @synthesize dynamicBundleIdentifierToClientInfo=_dynamicBundleIdentifierToClientInfo;
@property(retain, nonatomic) NSMutableDictionary *universalApplicationIdentifierToClientInfo; // @synthesize universalApplicationIdentifierToClientInfo=_universalApplicationIdentifierToClientInfo;
@property(retain, nonatomic) NSMutableDictionary *bundleIdentifierToClientInfo; // @synthesize bundleIdentifierToClientInfo=_bundleIdentifierToClientInfo;
- (void).cxx_destruct;
- (id)_queue_bundleInfoForNotification:(id)arg1 bundleIdentifier:(id)arg2;
- (id)bundleInfoForNotification:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_loadBundles;
- (void)_updateClientInfoForBundleIdentifer:(id)arg1 dictionary:(id)arg2 bundleInfo:(id)arg3 categories:(id)arg4;
- (void)_loadBundles;
- (id)init;

@end

