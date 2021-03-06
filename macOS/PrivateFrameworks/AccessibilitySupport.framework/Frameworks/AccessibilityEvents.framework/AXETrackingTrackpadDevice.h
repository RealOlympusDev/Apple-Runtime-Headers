//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityEvents/AXEEventTapListener-Protocol.h>
#import <AccessibilityEvents/AXETrackingTouchInputDevice-Protocol.h>

@class AXETrackingGestureEvent, AXFThrottler, NSArray, NSString;
@protocol AXETrackingTouchInputDeviceDelegate;

@interface AXETrackingTrackpadDevice : NSObject <AXEEventTapListener, AXETrackingTouchInputDevice>
{
    BOOL _swallowAllGestureEvents;
    BOOL __eventCaptureStarted;
    id <AXETrackingTouchInputDeviceDelegate> _delegate;
    AXFThrottler *__throttler;
    AXETrackingGestureEvent *__previousGestureEvent;
    NSArray *__availableTrackpadInfos;
}

@property(copy, nonatomic) NSArray *_availableTrackpadInfos; // @synthesize _availableTrackpadInfos=__availableTrackpadInfos;
@property(retain, nonatomic) AXETrackingGestureEvent *_previousGestureEvent; // @synthesize _previousGestureEvent=__previousGestureEvent;
@property(retain, nonatomic) AXFThrottler *_throttler; // @synthesize _throttler=__throttler;
@property(nonatomic) BOOL _eventCaptureStarted; // @synthesize _eventCaptureStarted=__eventCaptureStarted;
@property(nonatomic) BOOL swallowAllGestureEvents; // @synthesize swallowAllGestureEvents=_swallowAllGestureEvents;
@property(nonatomic) __weak id <AXETrackingTouchInputDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processNonSyntheticGestureEvent:(id)arg1;
- (id)_nonSyntheticGestureEventFromCGEvent:(struct __CGEvent *)arg1;
- (struct __CGEvent *)eventTapManager:(id)arg1 activelyTappedMouseEvent:(id)arg2 cgEvent:(struct __CGEvent *)arg3 withProxy:(struct __CGEventTapProxy *)arg4;
- (struct __CGEvent *)eventTapManager:(id)arg1 activelyTappedGestureEvent:(id)arg2 cgEvent:(struct __CGEvent *)arg3 withProxy:(struct __CGEventTapProxy *)arg4;
- (void)stopEventCapture;
- (void)startEventCapture;
- (void)dealloc;
- (id)initWithMinimumEventInterval:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

