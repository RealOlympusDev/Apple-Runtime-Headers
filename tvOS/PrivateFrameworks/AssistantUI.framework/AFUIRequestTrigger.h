//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SASRequestOptions;

@interface AFUIRequestTrigger : NSObject
{
    SASRequestOptions *_options;
    long long _state;
    NSMapTable *_observers;
}

@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) SASRequestOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)removeTriggerTarget:(id)arg1;
- (void)addTriggerTarget:(id)arg1 action:(SEL)arg2;
- (void)_updateState:(long long)arg1;
- (id)initWithRequestOptions:(id)arg1 updateHandle:(CDUnknownBlockType *)arg2;

@end

