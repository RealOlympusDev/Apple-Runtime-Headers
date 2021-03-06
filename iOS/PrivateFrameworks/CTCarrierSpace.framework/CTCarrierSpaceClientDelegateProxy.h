//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/CTCarrierSpaceClientDelegateProxyInterface-Protocol.h>

@class NSString;
@protocol CTCarrierSpaceClientDelegate;

@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface>
{
    id <CTCarrierSpaceClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CTCarrierSpaceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)purchasedPlan:(id)arg1 didChangeStatus:(long long)arg2 context:(id)arg3;
- (void)dataPlanMetricsDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)capabilitiesDidChange:(id)arg1;
- (void)remoteObjectRespondsToSelector:(SEL)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

