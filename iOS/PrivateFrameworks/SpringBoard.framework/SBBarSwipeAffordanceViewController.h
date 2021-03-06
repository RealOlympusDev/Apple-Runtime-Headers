//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>

@class SBBarSwipeAffordanceView, SBHomeGestureParticipant;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate>
{
    long long _homeGestureParticipantIdentifier;
    SBHomeGestureParticipant *_homeGestureParticipant;
    _Bool _wantsToBeActiveAffordance;
    _Bool _suppressAffordance;
}

@property(nonatomic) _Bool suppressAffordance; // @synthesize suppressAffordance=_suppressAffordance;
@property(nonatomic) _Bool wantsToBeActiveAffordance; // @synthesize wantsToBeActiveAffordance=_wantsToBeActiveAffordance;
- (void).cxx_destruct;
- (void)_updateActiveState;
- (void)_stopTryingToBecomeActiveAffordance;
- (void)_beginTryingToBecomeActiveAffordance;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)loadView;
- (id)initWithHomeGestureParticipantIdentifier:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) SBBarSwipeAffordanceView *view; // @dynamic view;

@end

