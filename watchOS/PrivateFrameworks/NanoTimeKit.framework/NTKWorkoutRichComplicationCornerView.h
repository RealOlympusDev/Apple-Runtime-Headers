//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCornerBaseCircularView.h>

@class NTKWorkoutRichComplicationBaseCircularView;

@interface NTKWorkoutRichComplicationCornerView : NTKRichComplicationCornerBaseCircularView
{
    NTKWorkoutRichComplicationBaseCircularView *_richView;
}

- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(float)arg1;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (id)_circularView;

@end

