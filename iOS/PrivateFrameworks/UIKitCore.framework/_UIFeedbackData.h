//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFeedbackData-Protocol.h>

@class NSString, _UIFeedbackParameters;

__attribute__((visibility("hidden")))
@interface _UIFeedbackData : NSObject <_UIFeedbackData>
{
    unsigned int _effectiveSystemSoundID;
    unsigned long long _effectiveEventType;
    double _effectiveDelay;
    _UIFeedbackParameters *_hapticParameters;
    _UIFeedbackParameters *_audioParameters;
    unsigned long long _effectiveEnabledFeedbackTypes;
}

@property(nonatomic, setter=_setEffectiveSystemSoundID:) unsigned int effectiveSystemSoundID; // @synthesize effectiveSystemSoundID=_effectiveSystemSoundID;
@property(nonatomic, setter=_setEffectiveEnabledFeedbackTypes:) unsigned long long effectiveEnabledFeedbackTypes; // @synthesize effectiveEnabledFeedbackTypes=_effectiveEnabledFeedbackTypes;
@property(retain, nonatomic, setter=_setAudioParameters:) _UIFeedbackParameters *audioParameters; // @synthesize audioParameters=_audioParameters;
@property(retain, nonatomic, setter=_setHapticParameters:) _UIFeedbackParameters *hapticParameters; // @synthesize hapticParameters=_hapticParameters;
@property(nonatomic, setter=_setEffectiveDelay:) double effectiveDelay; // @synthesize effectiveDelay=_effectiveDelay;
@property(nonatomic, setter=_setEffectiveEventType:) unsigned long long effectiveEventType; // @synthesize effectiveEventType=_effectiveEventType;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

