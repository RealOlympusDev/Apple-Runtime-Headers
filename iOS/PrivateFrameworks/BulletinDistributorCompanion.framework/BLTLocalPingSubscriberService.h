//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingService-Protocol.h>

@class BLTBulletinDistributorSubscriber, NSString;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService>
{
    BLTBulletinDistributorSubscriber *_subscriber;
}

@property(retain, nonatomic) BLTBulletinDistributorSubscriber *subscriber; // @synthesize subscriber=_subscriber;
- (void).cxx_destruct;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(_Bool)arg2 withAck:(_Bool)arg3 ackAllowedOnLocalConnection:(_Bool)arg4;
- (void)unsubscribeFromSectionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

