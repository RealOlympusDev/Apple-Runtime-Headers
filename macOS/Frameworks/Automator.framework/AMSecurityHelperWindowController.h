//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class AutomatorSecurityHelperHostViewController, NSView;

@interface AMSecurityHelperWindowController : NSWindowController
{
    NSView *__placeholder;
    BOOL __thirdPartyActionsState;
    BOOL __isShowing;
    BOOL __showSecurityWindowCalled;
    BOOL __didLoadRemoteView;
    AutomatorSecurityHelperHostViewController *__automatorSecurityHelperHostViewController;
    CDUnknownBlockType __completionHandler;
}

+ (id)sharedWindowController;
@property BOOL _thirdPartyActionsState; // @synthesize _thirdPartyActionsState=__thirdPartyActionsState;
@property(copy) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(retain, nonatomic) AutomatorSecurityHelperHostViewController *_automatorSecurityHelperHostViewController; // @synthesize _automatorSecurityHelperHostViewController=__automatorSecurityHelperHostViewController;
@property BOOL _didLoadRemoteView; // @synthesize _didLoadRemoteView=__didLoadRemoteView;
@property BOOL _showSecurityWindowCalled; // @synthesize _showSecurityWindowCalled=__showSecurityWindowCalled;
@property BOOL _isShowing; // @synthesize _isShowing=__isShowing;
@property __weak NSView *_placeholder; // @synthesize _placeholder=__placeholder;
- (void).cxx_destruct;
- (void)_connectViewBridge;
- (void)_updateClientUI;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_showIfReady;
- (void)showSecurityWindowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendCompletionHandlerAndFireNotificationIfNeeded:(CDUnknownBlockType)arg1;
- (void)_hideWindow;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;

@end

