//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem, HFItemUpdateOutcome, NAFuture;

@interface _HFItemUpdateFutureWrapper : NSObject
{
    _Bool _isInternal;
    NAFuture *_future;
    HFItem *_item;
    HFItemUpdateOutcome *_outcome;
}

+ (id)futuresFromWrappers:(id)arg1;
+ (id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(_Bool)arg3;
@property(retain, nonatomic) HFItemUpdateOutcome *outcome; // @synthesize outcome=_outcome;
@property(nonatomic) _Bool isInternal; // @synthesize isInternal=_isInternal;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NAFuture *future; // @synthesize future=_future;
- (void).cxx_destruct;

@end

