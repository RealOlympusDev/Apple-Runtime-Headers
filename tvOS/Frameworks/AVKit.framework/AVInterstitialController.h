//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVTimeRange, AVTimeRangeCollection;
@protocol AVInterstitialControllerDelegateManager, NSObject;

__attribute__((visibility("hidden")))
@interface AVInterstitialController : NSObject
{
    id <NSObject> _playerItemTimeJumpedObserver;
    AVPlayer *_player;
    id <AVInterstitialControllerDelegateManager> _delegateManager;
    AVTimeRangeCollection *_interstitialTimeRangeCollection;
    CDUnknownBlockType _didEnterInterstitialTimeRangeBlock;
    CDUnknownBlockType _didLeaveInterstitialTimeRangeBlock;
    CDUnknownBlockType _skipInterstitialTimeRangeBlock;
    AVObservationController *_kvo;
    AVObservationController *_kvoPlayerItem;
    AVTimeRange *_interstitialTimeRangeInProgress;
    id _interstitialBoundaryTimeObserver;
}

@property(retain, nonatomic) id interstitialBoundaryTimeObserver; // @synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver;
@property(retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // @synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress;
@property(retain, nonatomic) AVObservationController *kvoPlayerItem; // @synthesize kvoPlayerItem=_kvoPlayerItem;
@property(retain, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(copy, nonatomic) CDUnknownBlockType skipInterstitialTimeRangeBlock; // @synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveInterstitialTimeRangeBlock; // @synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterInterstitialTimeRangeBlock; // @synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(retain, nonatomic) id <AVInterstitialControllerDelegateManager> delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)didPresentInterstitialTimeRange:(id)arg1;
- (void)willPresentInterstitialTimeRange:(id)arg1;
- (void)skipInterstitialTimeRange:(id)arg1;
- (void)didBeginOrResumePlayback;
- (_Bool)_shouldSkipInterstitialTimeRange:(id)arg1;
@property(readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
- (void)_stopObservingInterstitialTimeRanges;
- (void)_startObservingInterstitialTimeRanges;
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1;
- (void)_updateInterstitialTimeRangeCollection;
@property(readonly, nonatomic) double timeRemainingInCurrentInterstitial;
@property(readonly, nonatomic) double currentDisplayTime;
- (double)currentTime;
- (id)currentItem;
- (double)displayTimeFromTime:(double)arg1;
- (double)timeFromDisplayTime:(double)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

