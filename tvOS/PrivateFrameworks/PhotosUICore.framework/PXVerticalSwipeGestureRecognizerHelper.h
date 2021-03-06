//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject
{
    struct {
        _Bool shouldRecognizeSwipeDownGestureRecognizer;
    } _delegateRespondsTo;
    _Bool _allowSwipeUp;
    _Bool _allowSwipeDown;
    id <PXVerticalSwipeGestureRecognizerHelperDelegate> _delegate;
    NSMapTable *_dependentScrollViews;
}

@property(readonly, nonatomic) NSMapTable *dependentScrollViews; // @synthesize dependentScrollViews=_dependentScrollViews;
@property(nonatomic) _Bool allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
@property(nonatomic) _Bool allowSwipeUp; // @synthesize allowSwipeUp=_allowSwipeUp;
@property(nonatomic) __weak id <PXVerticalSwipeGestureRecognizerHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1;
- (_Bool)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)verticalSwipeGestureRecognizerShouldBegin:(id)arg1;
- (id)init;

@end

