//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSString;
@protocol CRKIPAddressProviding, OS_dispatch_queue;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    id <CRKIPAddressProviding> mBaseProvider;
    NSObject<OS_dispatch_queue> *mQueue;
    int mNetworkChangeNotificationToken;
    NSString *_IPAddress;
}

@property(copy, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
- (void).cxx_destruct;
- (void)networkDidChange;
- (void)networkDidChangeDebounced;
- (void)unsubscribeFromNetworkChangeNotifications;
- (void)subscribeToNetworkChangeNotifications;
- (id)initWithIPAddressProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

