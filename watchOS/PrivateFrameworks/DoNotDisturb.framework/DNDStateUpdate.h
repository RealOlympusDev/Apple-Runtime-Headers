//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>
{
    DNDState *_previousState;
    DNDState *_state;
    unsigned int _reason;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) DNDState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) DNDState *previousState; // @synthesize previousState=_previousState;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned int)arg3;

@end

