//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBSwitcherModifierEvent : NSObject <BSDescriptionProviding>
{
    NSString *_handledReason;
    _Bool _handled;
}

@property(readonly, nonatomic, getter=isHandled) _Bool handled; // @synthesize handled=_handled;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleWithReason:(id)arg1;
@property(readonly, nonatomic) long long type;
- (_Bool)isTransitionEvent;
- (_Bool)isGestureEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

