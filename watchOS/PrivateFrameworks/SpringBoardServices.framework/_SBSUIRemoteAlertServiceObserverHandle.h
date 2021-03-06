//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSString;

@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject <SBSRemoteAlertHandleObserver>
{
    CDUnknownBlockType _activationHandler;
    CDUnknownBlockType _deactivationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType deactivationHandler; // @synthesize deactivationHandler=_deactivationHandler;
@property(copy, nonatomic) CDUnknownBlockType activationHandler; // @synthesize activationHandler=_activationHandler;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

