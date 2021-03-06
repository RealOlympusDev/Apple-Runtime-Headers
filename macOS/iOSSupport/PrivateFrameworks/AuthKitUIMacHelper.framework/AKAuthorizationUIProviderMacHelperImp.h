//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUIMacHelper/AKAuthorizationUIProviderMacHelper-Protocol.h>

@class AKAuthorizationWindowController, NSString, NSWindow;

@interface AKAuthorizationUIProviderMacHelperImp : NSObject <AKAuthorizationUIProviderMacHelper>
{
    NSWindow *_presentingWindow;
    AKAuthorizationWindowController *_authorizationWindowController;
}

@property(retain) AKAuthorizationWindowController *authorizationWindowController; // @synthesize authorizationWindowController=_authorizationWindowController;
@property __weak NSWindow *presentingWindow; // @synthesize presentingWindow=_presentingWindow;
- (void).cxx_destruct;
- (void)presentSheetOverWindow:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

